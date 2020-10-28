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
      int n,l;
      cin>>n>>l;
      vector<int>v;
      v.pb(0);
      for(int i=0;i<n;i++){
          int x;
          cin>>x;
          if(x==0||x==n)continue;
          v.pb(x);
      }
      v.pb(n);
      double t=0;
      int sz=v.size();
      int st=0,en=sz-1;
      int sp1=1,sp2=1;
      while(en-st>1){
        t=t+(double)(v[st+1]-v[st])/sp1;
        sp1++;
         t=t+(double)(v[en]-v[en-1])/sp2;
         sp2++;
         st++;
         en--;
      }
      t=t+(double)(v[en]-v[st])/(sp1+sp2);
     

     /* while(st<end){
        if(st>=it->first){
            inc++;
            ++it;
        }
        if(end<=t2->first){
            inc++;
            --t2;
        }
          if(st+inc>=end-dec){
             int dis=abs(st-end);
             int speed=inc+dec;
              del=(double)dis/speed;
                 break;
          }
         st+=inc;
         end-=dec;
         t++;

      }*/
      printf("%.15lf\n", t);
  }

    return 0;
}