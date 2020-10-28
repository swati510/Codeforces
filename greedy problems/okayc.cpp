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

  int t;
  cin>>t;
  while(t--){
      string s;
      int x;
      cin>>s;
      cin>>x;
      string w="";
      int n=s.length();
      f(i,n)w+='1';
      f(i,n){
          if(s[i]=='0'){
              if(i-x>=0)w[i-x]='0';
              if(i+x<n)w[i+x]='0';
          }
      }
      string str="";
      int fl=0;
      f(i,n){
       bool ora=false;
       if(i-x>=0&&w[i-x]=='1')ora=true;
        if(i+x<n&&w[i+x]=='1')ora=true;
        if(s[i]!=ora+'0'){
            fl=1;
            cout<<"-1"<<endl;
            break;
        }
      }
      if(fl==0)cout<<w<<endl;
  }

    return 0;
}