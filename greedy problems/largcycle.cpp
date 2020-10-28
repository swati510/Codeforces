#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define f(i,n) for(int i=0;i<n;i++)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define INF 2147483647
using namespace std;
typedef  pair<int,int> pii;
typedef  vector<int>   vi;
typedef  vector<pii> vii;
int res = 0;
//visit to check in before visiting the node, to stop repeat visiting
unordered_map<int,bool> visit;
void dfs(int a[], unordered_map<int,int> &mp, int i, int k){
    if(visit.find(i) != visit.end())
        return;
    if(a[i] == -1){
        visit[i] = true;
        return;
    }
    if(mp.find(i) != mp.end()){
        res = max(res, k-mp[i]);
        visit[i] = true;
        return;
    }
    mp[i] = k;
    dfs(a, mp, a[i], k+a[i]);
    visit[i] = true;
}


int largestCycle(int ar[],int n){
    bool vis[n];
    memset(vis,false,sizeof(vis));
    vi ans;
    map<int,int>sumtillprev;
    int start=0,curr=0,prev=0,sum=0;
    curr=start;
    sumtillprev[curr]=0;
    while(start<n){
        prev=curr;
        curr=ar[curr];
        if(curr==-1){
            start++;
            curr=start;
            memset(vis,false,sizeof(vis));
            vis[curr]=true;
            sum=0;
            sumtillprev[curr]=0;
        }
        else if(!vis[curr]){
            vis[curr]=true;
            sumtillprev[curr]=sum+=prev;
           
        }
        else{
            ans.pb(sum+=prev-sumtillprev[curr]);
            sum=0;
            start++;
            if(start>n)break;
            curr=start;
             memset(vis,false,sizeof(vis));
        }

    }
    int maxm=-1;
    for(auto x:ans)maxm=max(maxm,x);
    return maxm;

}
int32_t main()
{

  int n;
  cin>>n;
  int ar[n+1];
  f(i,n){
   int a;
   cin>>a;
   ar[i]=a;
  }

//int ans=largestCycle(ar,n);
//cout<<ans<<endl;
 for(int i=0;i<n;i++){
        if(visit.find(i) == visit.end()){
            unordered_map<int,int> mp;
            dfs(ar, mp, i, 0);
        }
    }
    cout<<res<<endl;
  

    return 0;
}