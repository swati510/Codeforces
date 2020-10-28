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
struct intr{
    int s;
    int en;
  
};
struct Cmp { 
    bool operator()(intr const& p1, intr const& p2) 
    { if((p1.en-p1.s)==(p2.en-p2.s))return p1.s>p2.s;
        return (p1.en-p1.s)<(p2.en-p2.s); 
    } 
};
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    priority_queue<intr,vector<intr>,Cmp>pq;  
    pq.push({1,n});
    int c=1;
    int ans[n+1];
    while(!pq.empty()&&c<=n){
       intr top=pq.top();
       pq.pop();
       if((top.en-top.s+1)%2==0){
           ans[(top.en+top.s-1)/2]=c++;
           int newe=(top.en+top.s-1)/2-1;
           int news=(top.en+top.s-1)/2+1;
           if(newe>=top.s)pq.push({top.s,newe});
           if(news<=top.en)pq.push({news,top.en});
       }
       else{
           ans[(top.en+top.s)/2]=c++;
           int newe=(top.en+top.s)/2-1;
           int news=(top.en+top.s)/2+1;
           if(newe>=top.s)pq.push({top.s,newe});
           if(news<=top.en)pq.push({news,top.en});
       }
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
  }

    return 0;
}
