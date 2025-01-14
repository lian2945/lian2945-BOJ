#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(const vector<vector<int>>& graph, vector<bool>& visited, int node, vector<int>& result)
{
    result.push_back(node);
    visited[node] = true;
    
    for(const auto& v : graph[node])
    {
        if(!visited[v])
        {
           dfs(graph, visited, v, result);
        }
    }
}

int main()
{
    int n, i1, i2;
    vector<int> result;
    vector<vector<int>> graph;
    vector<bool> visited;
    cin >> n;
    graph.resize(n+1);
    visited.resize(n+1, false);
    for(int i=0; i<n-1; i++)
    {
        cin >> i1 >> i2;
        graph[i1].push_back(i2);
        graph[i2].push_back(i1);
    }
    for(int i=1; i<=n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    visited[1] = true;
    dfs(graph, visited, 1, result);
    for(const auto& v : result)
    {
        cout << v << " ";
    }
    return 0;
}