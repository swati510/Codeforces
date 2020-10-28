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

int32_t main()
{

  int t=1;
  //cin>>t;
  while(t--){
      int n;
      cin>>n;
      int a[n];
      int sum=0;
      f(i,n)cin>>a[i];
      for(int i=0;i<n;i++){
           int tmp=a[i];
          for(int j=i+1;j<n;j++){
             
             // for(int k=i;k<=j;k++){
                  tmp^=a[j];
                 // tmp=3;
                  tmp=(int)pow(2,(int)log2(tmp));
                
                  if(tmp!=0) sum+=(int)log2(tmp)+1;
                 cout<<tmp<<" "<<sum<<" f";
              }
                 
              
          }
      
      cout<<sum<<endl;
      
  }

    return 0;
}