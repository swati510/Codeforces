#include <iostream>
using namespace std;
#define ll long long int

int fibonacci_sum_naive(ll n, ll m) {
    if (n <= 1)
        return n;
   ll previous=0,current=1;
   ll x;
   for (ll i=0;i<100;i++)
{  
   
   previous=current;
   current=(current+previous)%10;

   if (current==0 && previous==1) x=i+1; 
}

ll y=(n+2)%x;
ll z=(m+1)%x;

    ll a=0;
    ll b=1;
    ll c;
    for (ll i=2;i<=y;i++)
{
c=a+b;    
a=b;
b=c;    
}


   
    ll e=0;
    ll f=1;
    ll g;
    for (ll i=2;i<=z;i++)
{
g=e+f;    
e=f;
f=g;    
}
return abs((b%10)-(f%10))%10;


}

int main() {
    int t;
    t=1;
    while(t--){
    ll n,m;

    std::cin >> m>>n;
    int ans=fibonacci_sum_naive(n,m);
      std::cout << ans<<endl;
    }
    return 0;
}