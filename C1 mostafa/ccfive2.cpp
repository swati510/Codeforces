#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define f(i,n) for(int i=0;i<n;i++)
#define foraint(i,a,b) for(int i=a;i<b;i++)
#define INF 2147483647
using namespace std;
typedef  pair<int,int> pii;
typedef  vector<int>   vi;
typedef  vector<pii> vii;
int pts[200005][6]={0};

int comb[32][5];
void getcombinations(int n,int j) 
{ 
    int i = 0; 
    while (n > 0) { 
        comb[j][i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    
} 
int MaxSumDifference(vector<int>a, int n) 
{  
 /*   vector<int> finalSequence; 
    vector<int> final2;
  
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
        MaximumSum = MaximumSum + abs(finalSequence[i] -  
                                  finalSequence[i + 1]); 
        max2 = max2 + abs(final2[i] -  
                                  final2[i + 1]); 
    } 
    return max(MaximumSum,max2); */
int l=a[a.size()-1]; //left
int r=l;             // right
int i=0,j=a.size()-2;
int sum=0;
while(i<j){
        int li=abs(l-a[i]),ri=abs(r-a[i]);
        int lj=abs(l-a[j]),rj=abs(r-a[j]);
        if(li>ri||lj>rj){ //left side
                if(li>lj){
                        sum+=li;
                        l=a[i++];
                }else{
                        sum+=lj;
                        l=a[j--];
                }
        }else{
                if(ri>rj){
                        sum+=ri;
                        r=a[i++];
                }else{
                        sum+=rj;
                        r=a[j--];
                }
        }
        //cout<<l<<"---"<<r<<"------"<<i<<"---"<<j<<"----------"<<sum<<endl;
}
sum+=max(abs(l-a[i]),abs(r-a[i]));
return sum;
} 
int32_t main()
{

  int t;
  t=1;

   freopen("output2.txt","r",stdin);
    freopen("output3.txt","w",stdout);
  while(t--){
      int n,d;
      cin>>n>>d;
      memset(pts,0,sizeof(pts));
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<d;j++)
                 cin>>pts[i][j];
         }
         int r=pow(2,d-1);
       // for(int i=0;i<pow(2,d);i++)getcombinations(i,i);
        vector<vector<int>>val(32);
        for(int i=0;i<r;i++){
              for(int j=0;j<n;j++){
                  int s=0;
                  for(int dig=0;dig<d;dig++){
                    s += pts[j][dig] * (i&(1<<dig) ? 1 : -1);
                  }
                  val[i].pb(s);
              }
        }
        /*for(int i=0;i<r;i++){
            cout<<i;
            for(int j=0;j<n;j++){
                cout<<val[i][j]<<" ";
            }
            cout<<"hey"<<endl;
        }*/
        int maxm=INT_MIN;
    
        for(int i=0;i<r;i++){
            sort(val[i].begin(),val[i].end());
            int ini=0;
            int finall=n-1;
             int ans=0;
            for(int j=0;j<n-1;j++){
              ans+=max(abs(val[i][j]-val[i][ini]),abs(val[i][j]-val[i][finall]));
            }
            maxm=max(ans,maxm);
           /*cout<<i;
            for(int j=0;j<n;j++){
                cout<<val[i][j]<<" ";
            }
            cout<<"hey"<<endl;*/
          //  maxm=max(maxm,MaxSumDifference(val[i],n));
        }
       
       cout<<maxm<<endl;
  }
    return 0;
}