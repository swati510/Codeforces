#include <bits/stdc++.h>
#define int  long long int
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
int c;
int ans,maxm;
bool sortcol( const vector<int>v1, 
               const vector<int> v2 ) { 
    for(int i=0;i<d;i++){
   if(v1[i]!=v2[i])return v1[i]<v2[i];
    }
} 
void swapit(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
  cout<<"hi";
}
bool cmp(vector<int>& nums,vector<int>& nums2){
    string a="";
    string b="";
    f(i,d)a+=to_string(nums[i]);
    f(i,d)b+=to_string(nums2[i]);
    return a<b;
}
int manhattan(vector<int>a,vector<int>b){
    int sum=0;
    for(int i=0;i<d;i++)sum+=abs(a[i]-b[i]);
   // cout<<sum<<endl;
    return sum;
    
}
 void generate(vector<vector<int>>&a, int l, int r)
{
    if(l==r)
    {
      sort(a.begin(),a.end(),sortcol);
          cout<<"******"<<endl;
         for(int i=0;i<n;i++){
             f(j,d)cout<<a[i][j]<<" ";
             cout<<endl;}
             int beg=0,finall=n-1;
         ans=0;
         for(int j=0;j<n-1;j++){
             int ans1=manhattan(a[j],a[beg]);
             int ans2=manhattan(a[j],a[finall]);
           ans+=max(ans1,ans2);
         }
       if(ans>maxm){
       maxm=ans;}
       return;
    }
  
    for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            for(int j=0;j<n;j++){
            swap(a[j][l], a[j][r]);  
           }
            generate(a, l+1, r);  
  
          for(int j=0;j<n;j++){
            swap(a[j][l], a[j][r]);  }
        }  
}
/*void permute(vector<vector<int>>&a, int l, int r,int &maxm)  
{  
    // Base case  
    if (l == r)  {
         sort(a.begin(),a.end(),sortcol);
          cout<<"******"<<endl;
         for(int i=0;i<n;i++){
             f(j,d)cout<<a[i][j]<<" ";
             cout<<endl;
         }
        int beg=0,finall=n-1;
         ans=0;
         for(int j=0;j<n-1;j++){
             int ans1=manhattan(a[j],a[beg]);
             int ans2=manhattan(a[j],a[finall]);
           // cout<<"******"<<endl;
             //cout<<ans<<endl;
             //cout<<ans1<<" "<<ans2<<endl;
           ans+=max(ans1,ans2);
         }
         //cout<<ans<<" ";
       if(ans>maxm){
       //cout<<"hi";
       maxm=ans;}
        c++;
    }
    //20261061553
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            for(int j=0;j<n;j++){
            swap(a[j][l], a[j][r]);  
           }
            permute(a, l+1, r,maxm);  
  
          for(int j=0;j<n;j++){
            swap(a[j][l], a[j][r]);  }
        }  
    }  
} 
*/
int32_t main()
{
   freopen("output2.txt","r",stdin);
    freopen("output3.txt","w",stdout);
   map<int,int>fac;
  fac[1]=1;
  fac[2]=2;
  fac[3]=6;
  fac[4]=24;
  fac[5]=120;
      cin>>n>>d;
       maxm=INT_MIN;
     vector<vector<int>> a( n , vector<int> (d, 0));
      for(int i=0;i<n;i++){
          f(j,d){
              cin>>a[i][j];
              
          }
      }
      sort(a.begin(),a.end(),sortcol);
       cout<<"******"<<endl;
         for(int i=0;i<n;i++){
             f(j,d)cout<<a[i][j]<<" ";
             cout<<endl;
         }
        int beg=0,finall=n-1;
         ans=0;
         for(int j=0;j<n-1;j++){
            
             int ans1=manhattan(a[j],a[beg]);
             int ans2=manhattan(a[j],a[finall]);
           ans+=max(ans1,ans2);
         }
       maxm=max(maxm,ans);
    generate(a,0,d-1);

  
  

      cout<<maxm<<endl;
      

    

return 0;
}