#include <bits/stdc++.h>

using namespace std;


int P[200005][5];
int n, d;

long long distancee(int u, int v)
{
	long long dist = 0;
	for(int i=0; i<d; i++)
	{
		int tmp = abs(P[u][i] - P[v][i]);
		dist += 1LL * tmp;
	}
	return dist;
}

int main()
{
	int T;
	//scanf("%d", &T);
	
		scanf("%d %d", &n, &d);
		
		for(int i=0; i<n; i++)
			for(int j=0; j<d; j++)
				scanf("%d", &P[i][j]);
		
		int ans = 0;
		vector <long long> D(n);
		vector <bool> ok(n, 0);
		ok[0] = 1;
		for(int i=1; i<n; i++)
			D[i] = distancee(0, i);
		
		for(int i=1; i<n; i++)
		{
			long long best = 0;
			int next = -1;
			for(int j=0; j<n; j++)
			{
				if(!ok[j] && best < D[j])
				{
					best = D[j];
					next = j;
				}
			}
			if(next != -1)
			{
				ans = ans + (D[next] );
				ok[next] = 1;
				
				for(int j=0; j<n; j++)
				{
					if(!ok[j])
					{
						D[j] = max(D[j], distancee(j, next));
					}
				}
			}
		}
		
		printf("%d\n", ans);
	
	
	return 0;
}