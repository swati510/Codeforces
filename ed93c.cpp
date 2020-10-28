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
int findSubarraySum(int arr[], int n, int sum) 
{ 
    unordered_map<int, int> prevSum; 
  
    int res = 0; 
    int currsum = 0; 
  
    for (int i = 0; i < n; i++) { 
        currsum += arr[i]; 
        if (currsum == sum) 
            res++; 
        if (prevSum.find(currsum - sum) != prevSum.end()) 
            res += (prevSum[currsum - sum]); 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 
int n;
int arr[100005];
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
    cin>>n;
    f(i,n)cin>>arr[i];

  }

    return 0;
}