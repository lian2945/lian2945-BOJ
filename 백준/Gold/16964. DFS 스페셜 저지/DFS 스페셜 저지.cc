#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> distOne(int n, const vector<vector<int>>& graph) 
{
    vector<int> distance(n, -1);
    queue<int> q;
    q.push(0);
    distance[0] = 0;
    
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        
        for(const int& v : graph[front])
        {
            if(distance[v] == -1)
            {
                distance[v] = distance[front]+1;
                q.push(v);
            }
        }
    }
    
    return distance;
}

bool notChildren(int v, vector<vector<int>>& graph, vector<int>& distance)
{
    for(const auto& c : graph[v])
    {
        if(distance[c]!=-1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, a, b, v, present = 0;
    cin >> n;
    vector<vector<int>> graph;
    graph.resize(n);
    for(int i=0; i<n-1; i++)
    {
        cin >> a >> b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }
    
    vector<int> distOneV = distOne(n, graph);
    
    for(int i=0; i<n; i++)
    {
        cin >> v;
        if(distOneV[v-1] != present)
        {
            cout << 0;
            return 0;
        }
        distOneV[v-1] = -1;
        if(notChildren(v-1, graph, distOneV) == true)
        {
            int min = 999999;
            for(const auto& c : distOneV)
            {
                if(c!=-1 && c<min) min = c;
            }
            present = min;
            break;
        }
        else
        {
            present++;
        }
    }
    cout << 1;
    
    return 0;
}