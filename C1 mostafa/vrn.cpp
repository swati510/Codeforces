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
struct qs{
    int x;
    int y;
    int cost;
};
int32_t main()
{

  int t;
  cin>>t;
  while(t--)
  {
      int x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      queue<qs>q;
      q.push({x1,y1,0});
      int mincost=INT_MAX;
      map<pii,int>vis;
      vis[{x1,y1}]=1;
      while(!q.empty()){
         struct qs tp=q.front();
         q.pop();
         if(tp.x==x2&&tp.y==y2){
             mincost=tp.cost;
             break;
         }
         if((abs(x2-tp.x)>abs(x2-tp.x-2*tp.y))&&vis.find({tp.x+2*tp.y,tp.y})==vis.end()){
             vis[{tp.x+2*tp.y,tp.y}]=1;
             q.push({tp.x+2*tp.y,tp.y,tp.cost+1});
         }
          if((abs(x2-tp.x)>abs(x2-tp.x+2*tp.y))&&vis.find({tp.x-2*tp.y,tp.y})==vis.end()){
             vis[{tp.x-2*tp.y,tp.y}]=1;
             q.push({tp.x-2*tp.y,tp.y,tp.cost+1});
         }
         if((tp.y+2*tp.x>0)&&(abs(y2-tp.y)>abs(y2-2*tp.x-tp.y))&&vis.find({tp.x,tp.y+2*tp.x})==vis.end()){
             vis[{tp.x,tp.y+2*tp.x}]=1;
             q.push({tp.x,tp.y+2*tp.x,tp.cost+1});
         }
          if((tp.y+2*tp.x<0)&&(x2)&&vis.find({-tp.x,-(tp.y+2*tp.x)})==vis.end()){
             vis[{-tp.x,-(tp.y+2*tp.x)}]=1;
             q.push({-tp.x,-(tp.y+2*tp.x),tp.cost+1});
         }
          if((tp.y-2*tp.x>0)&&vis.find({tp.x,tp.y-2*tp.x})==vis.end()){
             vis[{tp.x,tp.y-2*tp.x}]=1;
             q.push({tp.x,tp.y-2*tp.x,tp.cost+1});
         }
          if((tp.y-2*tp.x<0)&&vis.find({-tp.x,-tp.y+2*tp.x})==vis.end()){
             vis[{-tp.x,-tp.y+2*tp.x}]=1;
             q.push({-tp.x,-tp.y+2*tp.x,tp.cost+1});
         }

      }
      cout<<mincost<<endl;
  }

    return 0;
}