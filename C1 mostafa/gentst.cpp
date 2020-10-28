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

 int n,d;
 srand((unsigned)time(0)); 
 n = (rand()%100000)+1; 
 d=(rand()%6)+1; 
 //freopen("output2.txt","r",stdin);
 freopen("output2.txt","w",stdout);
 cout<<n<<" "<<d<<endl;
 f(i,n){
     f(i,d){
         int x= (rand()%100000)+1; 
        cout<<x<<" ";
     }
     cout<<endl;
 }

    return 0;
}