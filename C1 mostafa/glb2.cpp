
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

int poin[200005][6] = {0};
int mergeit[200003];

bool cmp(const pair<int, pair<int, int>> &a,const pair<int, pair<int, int>> &b)
    {
       return a.first > b.first;
    }
int manhtn(int fg, int ind, int d)
{
  int sm=0;

        for (int i = 0; i < d; i++)
        {
           sm+=abs(poin[fg][i] - poin[ind][i]);
        }

 return sm;
}
int get_parent(int ch)
{
 if (mergeit[ch]==-1)return ch;

 return mergeit[ch] = get_parent(mergeit[ch]);
}
int get_maximum(int combo[6],  int n, int d)
{
 int poin_t = -88888888888888; 
 int ind = 0;
 for (int i = 0; i < n; i++)
 {
     int haha = 0;

        for (int j = 0; j < d; j++)
        {
          haha += (1 - 2 * combo[j]) * poin[i][j];
        }
///////////////////////////
//////////////////////////
//////////////////////////////
  if (haha > poin_t)
  {
            poin_t = haha;
            ind = i;
  }

 }

 return ind;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);    
cout.tie(NULL);

  freopen("output2.txt","r",stdin);
  freopen("output5.txt","w",stdout);

 int n, d;
 cin>>n>>d;

 for (int i = 0; i < n; i++)
 {
        for (int j = 0; j < d; j++)
        cin >> poin[i][j];
 }

 int poin_t[2 << d];

 for (int j = 0; j < 1 << (d); j++)
 {


        int combo[6] = {0};
        for (int dgt = 0; dgt < d; dgt++)
        {
            if (j & 1 << dgt)
                combo[dgt] = 1;
        }
        poin_t[j] = get_maximum(combo, n, d);


 }
 vector <pair<int, pair<int, int>>> adj;
 int maxd = 0;
 for (int i = 0; i < n; i++)
 {
        for (int j = 0; j < 1 << (d); j++)
        {
                int x = manhtn(i, poin_t[j], d);
                adj.push_back({x, {i, poin_t[j]}});
        }
 }
 int ans = 0;
 sort(adj.begin(), adj.end(), cmp);
 memset(mergeit, -1, sizeof(mergeit));
 for (int i = 0; i<adj.size(); i++)
 {
  int first = get_parent(adj[i].second.first);
  int second = get_parent(adj[i].second.second);
  if (first != second)
  {

        ans += adj[i].first;
        mergeit[first] = second;

  }
 }
 cout << ans << endl;
 return 0;
}