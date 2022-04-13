#include <bits/stdc++.h>
using namespace std;

#define NMAX 105
#define INF 1000000000

int flody[NMAX][NMAX];

int main()
{
    
    int n, m, u, v, w, maior, resp = INF, i, j, k;
    
    cin >> n >> m;
    
    for(i = 0;i < n;i++)
    {
        
        for(j = 0;j < n;j++)
        {
            
            flody[i][j] = INF;
            
        }
        
        flody[i][i] = 0;
        
    }
    
    for(i = 0;i < m;i++)
    {
        
        cin >> u >> v >> w;
        
        flody[u][v] = min(flody[u][v], w);
        flody[v][u] = min(flody[v][u], w);
        
    }
    
    for(k = 0;k < n;k++)
    {
        
        for(i = 0;i < n;i++)
        {
            
            for(j = 0;j < n;j++)
            {
                
                flody[i][j] = min(flody[i][j], 
                                  flody[i][k] + flody[k][j]);
                
            }
            
        }
        
    }

    for(j = 0;j < n;j++)
    {
        
        maior = -INF;
        
        for(i = 0;i < n;i++)
        {
            
            maior = max(maior, flody[i][j]);
            
        }
        
        resp = min(resp, maior);
        
    }
    
    cout << resp << endl;

    return 0;
}
