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
char mat[105][105];
int vis[105][105];
int dx[] = {0,  0, 1, -1};
int dy[] = {1, -1, 0,  0};
int n,m;
bool isValid(int i,int j){
    if(i<0||j<0||i>=n||j>=m||mat[i][j]=='#'||vis[i][j]){
        //cout<<0;
        return false;}
    return true;

}
int cg,cb;
void dfs(int i,int j){
    if(mat[i][j]=='G')cg++;
    if(mat[i][j]=='B')cb++;
   vis[i][j]=1;
    f(k,4){
        if(isValid(i+dx[k],j+dy[k]))dfs(i+dx[k],j+dy[k]);
    }

}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      
      cin>>n>>m;
      memset(vis,0,sizeof(vis));
     // cout<<endl;
     cg=0;
     cb=0;
      vii v;
      vii b;
      f(i,n){
        f(j,m){
            cin>>mat[i][j];
            if(mat[i][j]=='B'){
              b.pb({i,j}); 
            }
            else if(mat[i][j]=='G')v.pb({i,j});
          // cout<<mat[i][j];
        }
     //  cout<<endl;
      }

      for(auto x:b){
          int i=x.fi;
          int j=x.sc;
          for(int k=0;k<4;k++){
              int l=i+dx[k];
              int m=j+dy[k];
              if(isValid(l,m)&&mat[l][m]=='.')mat[l][m]='#';
          }
      }
     if(isValid(n-1,m-1)) dfs(n-1,m-1);
     int flag=0;
      for(auto x:v){
          int a=x.fi;
          int b=x.sc;
          if(!vis[a][b]){
              flag=1;
              break;
          }
      }
      if(cg<v.size()||cb>0)flag=1;
      //  f(j,m)cout<<mat[i][j]<<" ";cout<<endl;}
      if(flag==0)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;

      
  }

    return 0;
}