#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
#define DEBUG(x)
#else
#define DEBUG(x)
#endif

#include <cctype>

struct fcin_t
{
    fcin_t& operator>>(int& i)
    {
        int c = getchar();
        while(isspace(c)){c=getchar();}
        bool neg = false;
        if (c == '-') {neg=true; c=getchar();}
        if(isdigit(c)){i=c-'0'; c=getchar();}
        while(isdigit(c)){ i*=10; i+=c-'0'; c=getchar();}
        if(neg){i = -i;}
        return *this;
    }
} fcin;

using namespace std;

typedef long long Cost;
typedef int Node;

const int M = 747474747;
const Node MaxN = 6666;
const int MaxD = 5;

int pos[MaxN][MaxD];
Cost maxDist[MaxN+1];
int nemFak[MaxN];
int nemFakNum;

int T;
int N, D;

inline Cost dist(const Node a,const Node b)
{
    register int diff = abs(pos[a][0] - pos[b][0]);
    register Cost res = diff;
    //res *= diff;
    switch(D)
    {
        case 5:
            diff=abs(pos[a][4]-pos[b][4]);
            res+=diff;
        case 4:
            diff=abs(pos[a][3]-pos[b][3]);
            res+=diff;
        case 3:
            diff=abs(pos[a][2]-pos[b][2]);
            res+=diff;
        case 2:
            diff=abs(pos[a][1]-pos[b][1]);
            res+=diff;
    }
    return res;
}

int main()
{
    fcin >> T;
    for(int t=0; t<T; t++)
    {
        //INPUT
        fcin >> N >> D;
        for(Node n=0;n<N;n++)
        {
            for(int d=0;d<D;d++)
            {
                fcin >> pos[n][d];
            }
        }
        //INIT
        Node maxos = N+1;
        maxDist[N+1] = -1;
        for(Node n=1;n<N;n++)
        {
            nemFak[n-1] = n;
            maxDist[n] = dist(n, 0);
            if(maxDist[n] > maxDist[maxos])
            {
                maxos = n;
            }
        }
        nemFakNum = N-1;
        //MAIN
        int prod = 1;
        while(nemFakNum)
        {
            DEBUG( printf("%d\n", maxos) );
            if(maxDist[maxos] > 1)
            {
                prod = (prod*(maxDist[maxos] % M))%M;
            }
            Node ujMaxos = N+1;
            bool voltMarAMaxos = false;
            for(int j=0;j<nemFakNum;j++)
            {
                const int n = nemFak[j];
                if( n != maxos )
                {
                    Cost newDist = dist(n, maxos);
                    if(newDist > maxDist[n])
                    {
                        maxDist[n] = newDist;
                    }
                    if (maxDist[n] > maxDist[ujMaxos])
                    {
                        ujMaxos = n;
                    }
                    if(voltMarAMaxos)
                    {
                        nemFak[j-1] = n;
                    }
                    else
                    {
                        nemFak[j] = n;
                    }
                }
                else
                {
                    voltMarAMaxos = true;
                }
            }
            maxos=ujMaxos;
            nemFakNum--;
        }
        printf("%d\n",prod);
    }
    return 0;
}
