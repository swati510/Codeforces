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
vii v;
 int n;
bool check(pii a,pii b, pii c,pii d){
    int d1=abs(b.fi-c.fi)*abs(b.fi-c.fi)+abs(b.sc-c.sc)*abs(b.sc-c.sc);
    int d2=abs(a.fi-c.fi)*abs(a.fi-c.fi)+abs(a.sc-c.sc)*abs(a.sc-c.sc);
    int d3=abs(a.fi-d.fi)*abs(a.fi-d.fi)+abs(a.sc-d.sc)*abs(a.sc-d.sc);
    int d4=abs(b.fi-d.fi)*abs(b.fi-d.fi)+abs(b.sc-d.sc)*abs(b.sc-d.sc);
    int d5=abs(a.fi-b.fi)*abs(a.fi-b.fi)+abs(a.sc-b.sc)*abs(a.sc-b.sc);
    int d6=abs(c.fi-d.fi)*abs(c.fi-d.fi)+abs(c.sc-d.sc)*abs(c.sc-d.sc);
    if(d1==d2&&d1==d3&&d1==d4&&d5==d6&&d5==2*d1)return true;
    return false;
}
int countSquares(){
    map<pii,int>m;
    map<pii,int>vis;
    int count=0;
    for(auto x:v){
        m[x]=1;
    }
 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                pii fir =mp(v[i].fi,v[j].sc);
                pii sec=mp(v[j].fi,v[i].sc);
                set<pii>s;
                s.insert(fir);
                s.insert(sec);
                s.insert(v[i]);
                s.insert(v[j]);
                if(s.size()==4){
                    if((!vis[v[i]]||!vis[v[j]]||!vis[fir]||!vis[sec])&&(m.find(fir)!=m.end()&&m.find(sec)!=m.end())){
                       if(check(v[i],v[j],fir,sec)){
                           vis[v[i]]=1;
                           vis[v[j]]=1;
                           vis[fir]=1;
                           vis[sec]=1;
                           count++;
                       }
                    }
                }

            }
        }
    }
    return count;


}
int32_t main()
{

 
  cin>>n;
  f(i,n){
      int a,b;
      cin>>a>>b;
      v.pb(mp(a,b));    
  }
  int ans=countSquares();
  cout<<ans<<endl;


    return 0;
}