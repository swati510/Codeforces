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

  int n;
  cin>>n;
  int a[n+1];
  int ind=3;
  int maxm=0;
  map<int,int>fixed;
  for(int i=1;i<=n;i++){
      if(ind!=i){
          cout<<"? "<<i<<" "<<ind<<endl;
          cout.flush();
          cin>>a[i];
          maxm=max(maxm,a[i]);
      }
      }
      a[ind]=maxm+1;
      if(a[ind]==n){
          cout<<"! ";
            for(int i=1;i<=n;i++)cout<<a[i]<<" ";
            cout.flush();
            return 0;

      }
      fixed[ind]=1;
      int mod=n%a[ind];
      int far;
for(int i=1;i<=n;i++){
    if(a[i]==mod){
        int ans;
        cout<<"? "<<ind<<" "<<i<<endl;
          cout.flush();
          cin>>ans;
          if(ans!=a[ind])fixed[i]=1;
          else {
              far=i;
              //fixed[i]=1;
              a[far]=n;
          }
    }
}
for(int i=1;i<=n;i++){
    if(i!=far&&fixed.find(i)==fixed.end()){
        cout<<"? "<<i<<" "<<far<<endl;
          cout.flush();
          cin>>a[i];
    }
}
cout<<"! ";
for(int i=1;i<=n;i++)cout<<a[i]<<" ";
 cout.flush();

    return 0;
}