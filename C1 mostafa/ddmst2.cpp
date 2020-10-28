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
int calc(vector<vector<int>>v,int i,int j,int d){
    int dis=0;
    for(int k=0;k<d;k++){
        dis+=abs(v[i][k]-v[j][k]);
    }
    return dis;
}
int calcdis(vector<vector<int>>a,int d){
    vector<vector<int>> finalSequence; 
    vector<vector<int>> final2;
     int n=a.size();
       for (int i = 0; i < n/2; ++i) { 
        finalSequence.push_back(a[i]); 
      finalSequence.push_back(a[n - i - 1]); 
      
      final2.push_back(a[n - i - 1]); 
      final2.push_back(a[i]); 
    } 
  
   if (n % 2 != 0) 
       finalSequence.push_back(a[n/2]); 
       final2.push_back(a[n/2]);

  
    int MaximumSum = 0,max2=0; 
    for (int i = 0; i < n - 1; ++i) { 
        MaximumSum = MaximumSum +calc(finalSequence,i,i+1,d); 
        max2 = max2 + calc(finalSequence,i,i+1,d); 
    } /*
    int n=v.size();
    int dis=0;
    
    for(int i=0;i<n/2;i++){
      dis+=calc(v,i,n-i-1,d);
      if(abs(n-2*i-1)>1)dis+=calc(v,i,n-i-2,d);
    }
    return dis;*/
    return max(MaximumSum,max2);
}
vector<vector<int>>perm[121];
int c;
void permute(vector<int>&a, int l, int r)  
{  
    // Base case  
    if (l == r)  {
        perm[c].pb(a);
        c++;
    }
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
} 
bool sortcol( const vector<int>& v1, 
               const vector<int>& v2 ) { 
     for(int i=0;i<d;i++){
   if(v1[i]!=v2[i])return v1[i]<v2[i];
    }
} 
int manhattan(vector<int>a,vector<int>b){
    int sum=0;
    for(int i=0;i<d;i++)sum+=abs(a[i]-b[i]);
    return sum;
}
int32_t main()
{
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL);
        cout.tie(NULL);
   map<int,int>fac;
   for(int i=0;i<120;i++)perm[i].clear();
  fac[1]=1;
  fac[2]=2;
  fac[3]=6;
  fac[4]=24;
  fac[5]=120;

   freopen("output2.txt","r",stdin);
    freopen("output3.txt","w",stdout);
      cin>>n>>d;
      int maxm=0;
     vector<vector<int>> v( n , vector<int> (d, 0));
      for(int i=0;i<n;i++){
          f(j,d)cin>>v[i][j];
      }
     
      for(int i=0;i<n;i++){
          c=0;
          permute(v[i],0,d-1);
         //  cout<<"hi ";
      }

    int ans=0;
   for(int i=0;i<fac[d];i++){
    
        sort(perm[i].begin(),perm[i].end(),sortcol);
        cout<<"******"<<endl;
         for(int j=0;j<n;j++){
             f(k,d)cout<<perm[i][j][k]<<" ";
             cout<<endl;
         }
         int beg=0,finall=n-1;
       
         ans=max(ans,calcdis(perm[i],d));
        // for(int j=0;j<n-1;j++){
           //ans+=max(manhattan(perm[i][j],perm[i][beg]),manhattan(perm[i][j],perm[i][finall]));
         //}//
         cout<<"jii"<<ans<<endl;
       maxm=max(maxm,ans);

      }

      cout<<maxm<<endl;
      

    

return 0;
}