#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

vector<int> levels(int n, const vector<vector<int>>& graph, unordered_map<int, vector<int>>& children) 
{
    vector<int> level(n, -1);
    queue<int> q;
    q.push(0);
    level[0] = 0;
    
    while (!q.empty()) 
    {
        int front = q.front();
        q.pop();
        
        for (const int& v : graph[front]) 
        {
            if (level[v] == -1) 
            {
                level[v] = level[front] + 1;
                children[front].push_back(v);
                q.push(v);
            }
        }
    }
    
    return level;
}

int main() 
{
    int n, a, b, v;
    cin >> n;
    vector<vector<int>> graph(n);
    
    for (int i = 0; i < n - 1; i++) 
    {
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    
    unordered_map<int, vector<int>> children;
    vector<int> level = levels(n, graph, children);

    vector<int> order(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v;
        order[i] = v - 1;
    }

    if (order[0] != 0)
    {
        cout << 0;
        return 0;
    }

    queue<int> q;
    q.push(0);
    int index = 1;

    while (!q.empty()) 
    {
        int cur = q.front();
        q.pop();

        int childCount = children[cur].size();
        unordered_map<int, bool> childSet;
        
        for (int child : children[cur]) 
        {
            childSet[child] = true;
        }

        for (int i = 0; i < childCount; i++) 
        {
            if (childSet.find(order[index]) == childSet.end()) 
            {
                cout << 0;
                return 0;
            }
            q.push(order[index]);
            index++;
        }
    }

    cout << 1;
    return 0;
}
