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
int n,d;
int maxm;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
vector<vector<int>>perm[121];
vector<vector<int>>v1;
int c;
void generate(vector<int>&arr, int beg, int finall,int fl)
{
    if(beg==finall)
    {
        perm[c].pb(arr);
        c++;
        return;
    }
    int i;
    for(i=beg;i<=finall;i++)
    {
        swap((arr[i]), (arr[beg]));
        generate(arr, beg+1, finall,fl+1);
       swap((arr[i]), (arr[beg]));
    }
}
    
bool cmp(vector<int> v1,vector<int> v2){
               
    for(int i=0;i<d;i++){
   if(v1[i]!=v2[i])return v1[i]<v2[i];
    }
}
int fac(int n){
    if(n==1)return 1;
    else return n*fac(n-1);
}
int manhattan(vector<int>a,vector<int>b){
    int sum=0;
    for(int i=0;i<d;i++)sum+=abs(a[i]-b[i]);
    return sum;
}
int32_t main()
{

  int t;
  t=1;
  
   freopen("output2.txt","r",stdin);
    freopen("output3.txt","w",stdout);
  while(t--){
      
      cin>>n>>d;
       maxm=INT_MIN;
     vector<vector<int>> v( n , vector<int> (d, 0));
      for(int i=0;i<n;i++){
          f(j,d)cin>>v[i][j];
      }
      for(int i=0;i<fac(d);i++)perm[i].clear();
      for(int i=0;i<n;i++){
          c=0;
          generate(v[i],0,d-1,0);
         //  cout<<"hi ";
      }
  
   for(int i=0;i<fac(d);i++){
    
        sort(perm[i].begin(),perm[i].end(),cmp);
        cout<<"******"<<endl;
         for(int j=0;j<n;j++){
             f(k,d)cout<<perm[i][j][k]<<" ";
             cout<<endl;
         }
         int beg=0,finall=n-1;
         int ans=0;
         for(int j=0;j<n-1;j++){
           ans+=max(manhattan(perm[i][j],perm[i][beg]),manhattan(perm[i][j],perm[i][finall]));
         }
       maxm=max(maxm,ans);

      }

      cout<<maxm<<endl;
      

    
}
return 0;
}