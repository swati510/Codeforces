#include <bits/stdc++.h>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int> > 
#define vl vector<long long>
#define vc vector<char> 
#define vvc vector<vector<char> > 
#define vpi vector<pair<int,int> >
#define ll long long 
#define sz(a) int(a.size())
#define forn(i,n) for(int i = 0 ; i < int(n) ; i++)
#define all(x) x.begin(),x.end()
#define vpl vector<pair<long long,long long> > 
#define F first
#define S second
#define mp make_pair
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pci pair<char,int>
#define len(s) s.length()
#define un unsigned
# define M_PI           3.14159265358979323846  /* pi */
#define modulo 998244353ll
#define mod 1000000007ll
#define MAXN  1000001 
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll power(ll a,ll b){return b?power(a*a%mod,b/2)*(b%2?a:1)%mod:1;}
ll gcd(ll a,ll b){if(a==0 || b == 0) return max(a,b);if(a == 1 || b == 1)return 1;return gcd(max(a,b)%min(a,b),min(a,b));}

/*
int parent[200001];
int ssize[200001];
int cnt = 0;

void make_set(int i)
{
    parent[i] = i;
    ssize[i] = 1;
}

int find_set(int i)
{
    if(parent[i] == i)
    return i;
    return parent[i] = find_set(parent[i]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (ssize[a] < ssize[b])
            swap(a, b);
        parent[b] = a;
        ssize[a] += ssize[b];
    }
}
*/

vi adj[2000005];
int color[2000005];
int parent[2000005];
vvi cycles;


void dfs_cycles(int u,int p)
{
    if(color[u] == 2)
    return;

    if(color[u] == 1)
    {
        vi temp;
        int cur = p;
        temp.pb(cur);
        while(cur != u)
        {
            cur = parent[cur];
            temp.pb(cur);
        }
        cycles.pb(temp);
        return;
    }

    parent[u] = p;
    color[u] = 1;
    for(int v : adj[u])
    {
        if(v != p)
        dfs_cycles(v,u);
    }
    color[u] = 2;
}

void solve()
{
    int n;
    cin>>n;
    vi a(n,0);
    forn(i,n)
    {
        cin>>a[i];
        if(a[i] != -1)
        adj[i].pb(a[i]);
    }
    forn(i,n)
    {
        if(color[i] == 0)
        {
            dfs_cycles(i,-1);
        }
    }
    int ans = -1;
    for(auto u : cycles)
    {
        int c_sum = 0;
        c_sum += accumulate(all(u),0);
        ans = max(ans,c_sum);
    }
    cout<<ans<<endl;
}


int main()
{
    fast();
    int t;
    // cin>>t;
    t = 1;
    while(t--)  
    solve();
    return 0;
}