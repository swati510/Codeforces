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
int a[100005];
int flag=0;

int32_t main()
{

int n;
cin>>n;
int sum=0,maxm=0;
f(i,n){
    cin>>a[i];
    sum+=a[i];
    maxm=max(maxm,a[i]);
}
if(sum%2==0&&maxm>=sum-maxm)cout<<"YES"<<endl;
cout<<"NO"<<endl;

  

    return 0;
}