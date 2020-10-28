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
vector<int>prime(1000001);
vi prr;
void sieve(){
   int isprime[1000005];
    memset(isprime,0,sizeof(isprime));
    prime[1]=1;
    for(int i=2;i=1000000;i++){
       if(!isprime[i]){
          // prime.push_back(i);
           for(int j=i*i;j<=1000000;j+=i)isprime[j]=1;
         prime[i]=prime[i-1]+1-isprime[i];
       }
    }
    
   // for(int i=2;i<=1000000;i++)if(isprime[i])prime.pb(i);
    //for (auto x : prime) { prr.pb(x * x);}

}
int32_t main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
  cin>>t;
  sieve();
  while(t--){
      int n;
      cin>>n;
      int ind=prime[n]-prime[sqrt(n)];
      int c=0;
     
      cout<<ind+1<<endl;
  }

    return 0;
}