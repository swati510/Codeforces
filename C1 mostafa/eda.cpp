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

  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      if(n<=2||n==4)cout<<"-1"<<endl;
   
      else if(n%3==0){
          cout<<n/3<<" 0 0"<<endl;
      }
    else if(n%5==0)cout<<"0 "<<n/5<<" 0"<<endl;
      else if(n%7==0){
          cout<<"0 0 "<<n/7<<endl;

      }
      else{
          int c5=n/5-1;
          n=n%5+5;
          if(n==8){
              cout<<"1 "<<c5+1<<" 0"<<endl;
              continue;
          }
          int c3=0,c7=0;
          int fl=0;
          if(n%3==0)c3=n/3;
          else if(n%7==0)c7=n/7;
           cout<<c3<<" "<<c5<<" "<<c7<<endl;

      }
      
  }

    return 0;
}