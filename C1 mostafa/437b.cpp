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
unsigned int get(int n) 
{ 
    return n & -n; 
}
unordered_map<int,int>m2;
void process(unsigned int n) 
{ 
    int pos=0; 
    while (n) { 
    if( n & 1) m2[pos]++;
      pos++;
        n >>= 1; 
    }  
} 
int32_t main()
{

  int sum,lim;
  cin>>sum>>lim;
  unordered_map<int,int>m1;
 int s2=0;
  stack<int>s;
  for(int i=lim;i>=1;i--){
     sum-=get(i);
     s.push(i);
     if(sum<0){
         s2=1;
         break;
     }
     if(sum==0)break;
  }
  if(s2||sum!=0){
      cout<<"-1"<<endl;
      return 0;

  }
 else{
     cout<<s.size()<<endl;
     while(!s.empty()){
         cout<<s.top()<<" ";
         s.pop();
     }
 }

    return 0;
}