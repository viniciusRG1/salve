#include <bits/stdc++.h>
using namespace std;

#define NMAX 1010
#define INF 1000000000

typedef pair< int, int > pii;

vector< pii > grafo[NMAX];

int dist[NMAX];

int main()
{
    
    int n, m, u, v, w, d, i;
    
    cin >> n >> m;
    
    priority_queue< pii, vector< pii >, greater< pii > > fila;
    
    for(i = 0;i <= n + 1;i++)
    {
        
        dist[i] = INF;
        
    }
    
    for(i = 0;i < m;i++)
    {
        
        cin >> u >> v >> w;
        
        grafo[u].push_back({w, v});
        grafo[v].push_back({w, u});
        
    }
    
    dist[0] = 0;
    fila.push({dist[0], 0});
    
    while(fila.empty() == false)
    {
        
	d = fila.top().first;
        u = fila.top().second;
        
        fila.pop();

    	if(d != dist[u])
    	{
    	    
    	       continue;
    	    
    	}
        
        for(auto viz : grafo[u])
        {
            
            w = viz.first;
            v = viz.second;
            
            if(dist[v] > dist[u] + w)
            {
                
                dist[v] = dist[u] + w;
                
                fila.push({dist[v], v});
                
            }
            
        }
        
    }
    
    cout << dist[n + 1] << endl;

    return 0;
}
