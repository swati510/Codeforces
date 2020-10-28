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
int N,d;
vector<vector<int>> points( 100000 , vector<int> (5, 0));
int32_t main()
{
    
  freopen("output2.txt","r",stdin);
  freopen("output5.txt","w",stdout);
 int N,d;
    cin>>N>>d;
    for(int i=0;i<N;i++){
        for(int j=0;j<d;j++)cin>>points[i][j];
    }
  int ans = 0, cur = 0;
        vector<int> dist(N, INT_MIN), seen(N);
        
        for (int i = 0; i < N - 1; i++) {
            int x = points[cur][0], y = points[cur][1], a=points[cur][2],b=points[cur][3],c=points[cur][4];
            int nextMin = INT_MIN;
            int next = cur;
            
            seen[cur] = 1;
            for (int j = 0; j < N; j++) {
                if (seen[j]) continue;
                
                dist[j] = max(dist[j], abs(points[j][0] - x) + abs(points[j][1] - y)+abs(points[j][2] - a) + abs(points[j][3] - b)+ abs(points[j][4] - c));
                if (dist[j] > nextMin) {
                    nextMin = dist[j];
                    next = j;
                }
            }
            
            ans += nextMin;
            cur = next;
            
        }
        
        cout<< ans<<endl;
    

    return 0;
}