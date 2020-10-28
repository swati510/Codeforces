#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
vector<int>v(1500);
int i,p,n=1e5;
void SieveOfEratosthenes() 
{ 
    bool prime[n]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
		{   v.push_back(p);
            for (int i=p*p; i<=n; i += p) {
				prime[i] = false; }
        } 
    } 
} 
  
int main()
{
    SieveOfEratosthenes() ;
	int r, c, j, gcd=v[0], lcm, pro=1;
	cin>>r>>c;
	for(i=0;i<c;i++){
		pro*=v[i];
		gcd=__gcd(gcd,v[i]);
		cout<<v[i];
	}
	lcm=pro/gcd;
	for(i=1;i<r;i++){
		for(j=0;j<c;j++){
			cout<<i*lcm<<" "; 
		}
		cout<<endl;
	}
}