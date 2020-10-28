
#include <bits/stdc++.h>

#define fa(i,a,b) for(int i=a;i<b;i++)
using namespace std;
long long int a[200005][32];
long long int calc(int a,int b);
int main()
{
   int te;
   te=1;
   while(te--)
   {
    int n,d;
    scanf("%d%d",&n,&d);
    int a[n][d];
    fa(i,0,n)
    fa(j,0,d)
    scanf("%d",&a[i][j]);
    
    int nod=0;
    int m=n-1;
    long long int pr[n];
    fa(i,0,n) pr[i]=0;
    long long int ans=0;
    while(m--)
    {
              long long int mx=-1;
              int inde=0;
              fa(i,0,n)
              {
                      if(i==nod) pr[i]=-1;
                      else if(pr[i]!=-1)
                      {
                                 long long int maxmm=0;
                                 fa(j,0,d)
                                 {
                                         maxmm+=calc(a[nod][j],a[i][j]);                                        
                                 }
                                 if(maxmm>pr[i])
                                 pr[i]=maxmm;
                      }
                      if(pr[i]>mx)
                      {
                         mx=pr[i]; 
                         inde=i;                                   
                      }
              }
          if(mx<=0)break;
          else if(mx>0)
          {   
               mx=mx;
               ans=(ans+mx);    
          pr[inde]=-1;
          nod=inde;
          }
    
    }
   cout<<ans<<"\n";
   }
return 0;
}
long long int calc(int a,int b)
{
     long long int q,w,an;
     q=a;
     w=b;
     an=(abs(q-w));
     
     
return an;
}