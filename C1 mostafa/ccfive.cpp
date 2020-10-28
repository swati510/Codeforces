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
struct edge{
    int u;
    int v;
    int weight;
    bool operator<(edge const& other) {
        return weight > other.weight;
    }
};
struct point{
    int d[5];
    point(){
        memset(d,0,sizeof(d));
    }

};
bool fun0(point a,point b){
    return a.d[0]<b.d[0];
}
bool fun1(point a,point b){
    return a.d[1]<b.d[1];
}
bool fun2(point a,point b){
    return a.d[2]<b.d[2];
}
bool fun3(point a,point b){
    return a.d[3]<b.d[3];
}
bool fun4(point a,point b){
    return a.d[4]<b.d[4];
}
int calc(vector<point>v,int i,int j,int d){
    int dis=0;
    for(int k=0;k<d;k++){
        dis+=abs(v[i].d[k]-v[j].d[k]);
    }
    return dis;
}
int calcdis(vector<point>a,int d){
    vector<point> finalSequence; 
    vector<point> final2;
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
int32_t main()
{

  int t;
  t=1;
  while(t--){
      int n,d;
      cin>>n>>d;
     // int v[n][6];
      vector<point>v(n);
      for(int i=0;i<n;i++){
          f(j,d){
              int a;
              cin>>a;
              v[i].d[j]=a;
          }
      }
   
    int cost=0,maxcost=0;
    
    
    // sort(v.begin(),v.end(),fun0);
     
    cost=calcdis(v,d);
    maxcost=max(cost,maxcost);
    sort(v.begin(),v.end(),fun1);
    cost=calcdis(v,d);
    maxcost=max(cost,maxcost);
     
 sort(v.begin(),v.end(),fun2);
    cost=calcdis(v,d);
    maxcost=max(cost,maxcost);
 sort(v.begin(),v.end(),fun3);
    cost=calcdis(v,d);
    maxcost=max(cost,maxcost);
 sort(v.begin(),v.end(),fun4);
    cost=calcdis(v,d);
    maxcost=max(cost,maxcost);
cout<<maxcost<<endl;

    /*  vector<edge>dis;
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              dis.pb({i,j,calc(v,i,j,d)});
             // m[{i,j}]=calc(v,i,j,d);
          }
      }
      sort(dis.begin(),dis.end());
      int tree_id[n];
      for (int i = 0; i < n; i++)
         tree_id[i] = i;

sort(dis.begin(), dis.end());
int cost=0;
for (edge e : dis) {
    if (tree_id[e.u] != tree_id[e.v]) {
        cost += e.weight;
       // result.push_back(e);

        int old_id = tree_id[e.u], new_id = tree_id[e.v];
        for (int i = 0; i < n; i++) {
            if (tree_id[i] == old_id)
                tree_id[i] = new_id;
        }
    }
}*/
//cout<<cost<<endl;
}
      
  

    return 0;
}