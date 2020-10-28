
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include<queue>
using namespace std;
struct P{
    int x,y,id;
}A[100010];
struct Q{
    int a,b,c;
}C[2000010];
int T[100010],pos[100010],ha[100010],h,cnt=0;
 
int cmp(P a,P b){
    if(a.x==b.x) return a.y<b.y;
    return a.x<b.x;
}
int cmp1(Q a,Q b){
    return a.c>b.c;
}
int id(int x){
    return lower_bound(ha+1,ha+1+h,x)-ha;
}
void add(int x,int v,int k){
    for(;x<=1e5;x+=x&-x){
        if(T[x]<v){
            T[x]=v;
            pos[x]=k;
        }
    }
}
int qmax(int x){
    int ans=0,ma=-2000000009;
    for(;x;x-=x&-x){
        if(ma<T[x]){
            ma=T[x];
            ans=pos[x];
        }
    }
    return ans;
}
void build(int n){
     int i,j,k,x;
     for(j=1;j<=8;j++){
         for(i=1;i<=n;i++){
            if(j%2==0) swap(A[i].x,A[i].y);
            else A[i].x*=-1;
         }
         
         sort(A+1,A+1+n,cmp);
         for(i=1;i<=n;i++) ha[i]=A[i].x-A[i].y;
         sort(ha+1,ha+1+n);
         h=unique(ha+1,ha+1+n)-ha-1;
 
         for(i=0;i<=1e5;i++){
            T[i]=-2000000009;
            pos[i]=0;
         }
 
         for(i=n;i;i--){
              k=id(A[i].x-A[i].y);
              x=qmax(k);
              if(x){
                   C[++cnt].a=A[i].id;
                   C[cnt].b=A[x].id;
                   C[cnt].c=abs(A[x].x-A[i].x)+abs(A[x].y-A[i].y);
              }
              add(k,A[i].x+A[i].y,i);
         }
     }
}
int p[100010];
int f(int x){
    if(x==p[x]) return x;
    p[x]=f(p[x]);
    return p[x];
}
int main(){
     int a,b,i,n;
     int dim;
     scanf("%d %d",&n,&dim);
     for(i=1;i<=n;i++){
         scanf("%d%d",&A[i].x,&A[i].y);
         A[i].id=p[i]=i;
     }
     build(n);
     sort(C+1,C+1+cnt,cmp1);
 
     int ans=0;
     for(i=1;i<=cnt;i++){
         a=f(C[i].a);
         b=f(C[i].b);
         if(a!=b){
            p[a]=b;
            ans=C[i].c;
         }
     }
     printf("%d\n",ans);
}