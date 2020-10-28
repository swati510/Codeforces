#include <bits/stdc++.h>
#define LL long long int
#define INF INT_MAX
using namespace std;
struct Point 
{ 
    int x; 
    int y; 
    bool operator<(const Point &other) const { return x < other.x; }  
}; 
bool onLine(Point p, Point q, Point r) 
{ 
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && 
            q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) 
        return true; 
    return false; 
} 
int orientation(Point p, Point q, Point r) 
{ 
    int val = (q.y - p.y) * (r.x - q.x) - 
              (q.x - p.x) * (r.y - q.y); 
  
    if (val == 0) return 0;  // colinear 
    return (val > 0)? 1: 2; // clock or counterclock wise 
} 
vector<Point> convexpolygon(vector<Point> points, int n) 
{ 
   // if (n < 3) return; 
  
    vector<Point> hull; 
  
    int l = 0; 
    for (int i = 1; i < n; i++) 
        if (points[i].x < points[l].x) 
            l = i; 
  
    int p = l, q; 
    do
    { 
        hull.push_back(points[p]); 
  
        q = (p+1)%n; 
        for (int i = 0; i < n; i++) 
        {  
           if (orientation(points[p], points[i], points[q]) == 2) 
               q = i; 
        } 
  
        p = q; 
  
    } while (p != l); 
  
              return hull;
}
bool intersects(Point p1, Point q1, Point p2, Point q2) 
{ 
    int o1 = orientation(p1, q1, p2); 
    int o2 = orientation(p1, q1, q2); 
    int o3 = orientation(p2, q2, p1); 
    int o4 = orientation(p2, q2, q1); 
   
    if (o1 != o2 && o3 != o4) 
        return true; 
  
    if (o1 == 0 && onLine(p1, p2, q1)) return true; 
  
    if (o2 == 0 && onLine(p1, q2, q1)) return true; 
  
    if (o3 == 0 && onLine(p2, p1, q2)) return true; 
  
    if (o4 == 0 && onLine(p2, q1, q2)) return true; 
  
    return false; 
} 
  
bool isInside(vector<Point> polygon, int n, Point p) 
{ 
    if (n < 3)  return false; 
  
    Point extreme = {INF, p.y}; 
  
    int count = 0, i = 0; 
    do
    { 
        int next = (i+1)%n; 
  
        if (intersects(polygon[i], polygon[next], p, extreme)) 
        { 
            if (orientation(polygon[i], p, polygon[next]) == 0) 
               return onLine(polygon[i], p, polygon[next]); 
  
            count++; 
        } 
        i = next; 
    } while (i != 0); 
  
    return count&1;  
} 

int main() {
  int t;
  cin>>t;
  while(t--){
      int n,q;
      cin>>n>>q;
      set<Point>s;
      for(int i=0;i<n;i++){
          int x,y;
          cin>>x>>y;
          s.insert({x,y});
      }
     
      if(s.size()<=2){
          cout<<0<<endl;
          continue;
      }
      vector<vector<Point>>final;
      int f=0,checked=0;
      while(s.size()>=3){
          vector<Point>tmp;
          for(auto i=s.begin();i!=s.end();++i){
              tmp.push_back({i->x,i->y});
          }
          vector<Point>ans=convexpolygon(tmp,tmp.size());
         
          
              for(int i=0;i<ans.size();i++){
                  s.erase({ans[i]});
              }
         final.push_back(ans); 
          
      }
      while(q--){
          int x, y;
          cin>>x>>y;
          Point p;
          p.x=x;
          p.y=y;
          int c=0;
          for(int i=final.size()-1;i>0;i--){
              if(isInside(final[i],final[i].size(),p)){
                  c=i+1;
                  break;
              }
          }
          cout<<c<<endl;
      }
      
      
  }
   return 0; 
}
	      
