#include <bits/stdc++.h>
using namespace std;
#define V 102
int graph[V][V];
int parent[V];
int rGraph[V][V];
bool bfs(int s, int t)
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    queue <int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
      //  printf("u =%d\n",u);
        q.pop();

        for (int v=0; v<V; v++)
        {
            if (visited[v]==false && rGraph[u][v] > 0)
            {
                q.push(v);
                parent[v] = u;
              //  printf("parent[%d] =%d\n",v,u);
                visited[v] = true;
            }
        }
    }

    return (visited[t] == true);
}

int fordFulkerson(int s, int t)
{
    int u, v;
    for (u = 0; u < V; u++){
        for (v = 0; v < V; v++)
            {

             rGraph[u][v] = graph[u][v];
            // printf("rGraph[%d][%d] =%d\n",u,v,rGraph[u][v]);
            }}



    int max_flow = 0;
    while (bfs(s,t))
    {

        int path_flow = INT_MAX;
        for (v=t; v!=s; v=parent[v])
        {
            u = parent[v];
          //  printf("..u=%d..\n",u);
            path_flow = min(path_flow, rGraph[u][v]);
           // printf("path_flow = %d..\n",path_flow);
        }


        for (v=t; v != s; v=parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
           // printf("..rGraph[%d][%d]...=%d\n",u,v,rGraph[u][v]);
            rGraph[v][u] += path_flow;
           // printf("!!!rGraph[%d][%d]!!! =%d\n",v,u,rGraph[v][u]);
        }

        max_flow += path_flow;
        //printf("max_flow =%d\n",max_flow);
    }

    return max_flow;
}

int main()
{int n, m, s, t;  int tes,o=0;
   cin >> tes;
   while(tes--){o++;
   cin >> n;  cin>> s >> t >> m;
   memset(graph, 0, sizeof graph);
   for(int i = 0; i < m; i++){
       int a, b, w;
       cin >> a >> b >> w;
       graph[a][b] += w; graph[b][a] += w;}
cout<<"Case "<<o<<": "<<fordFulkerson(s,t)<< endl;}}
