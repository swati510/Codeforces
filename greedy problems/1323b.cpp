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
void process(unordered_map<int,int>&m1,int a[],int n){
    int i=0;
    while(i<n){
        if(a[i]==0){
            i++;
            continue;
        }
        int j=i;
        while (j < n && a[j] == 1) {
            j++;
        }
        for(int len=1;len<=j-i;len++)m1[len]+=j-i-len+1;
       //cout<<m1[1];
        i=j;
    }
}
int32_t main()
{

  int m,n,k;
  cin>>n>>m>>k;
  unordered_map<int,int>m1;
  unordered_map<int,int>m2;
  int a[n],b[n];
  f(i,n){
      cin>>a[i];
      m1[i]=0;
  }
  m1[n]=0;
  m2[m]=0;
  f(i,m){
      cin>>b[i];
      m2[i]=0;}
  process(m1,a,n);
  process(m2,b,m);
  int ans=0;
  for (int i = 1; i <=n; i++){
      if(k%i==0&&(k/i)<=m)ans+=m1[i]*m2[k/i];
  }
  
  cout<<ans<<endl;
  

    return 0;
}