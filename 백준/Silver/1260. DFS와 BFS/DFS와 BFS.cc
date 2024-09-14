#include <iostream>
#include <queue>
using namespace std;

bool graph[1001][1001]={false,};
bool visited[1001];
int r, exec, v;

void dfs(int k) {
    cout << k + 1 << " ";
    visited[k]=true;
    for(int i=0;i<r;i++) {
        if(!graph[k][i] || visited[i]) continue;
        dfs(i);
    }
}

void bfs(int k) {
    queue<int> q;
    bool visitedbfs[1001]={false,};
    q.push(k);
    while(!q.empty()) {
        k=q.front();
        visitedbfs[k]=true;
        cout << k + 1 << " ";
        q.pop();
        for(int i=0;i<r;i++) {
            if(graph[k][i] && !visitedbfs[i]) {
                visitedbfs[i]=true;
                q.push(i);
            }
        }
    }
}

int main() {
    int a, b;
    cin >> r >> exec >> v;
    for(int i=0;i<exec;i++) {
        cin >> a >> b;
        a--;
        b--;
        graph[a][b]=true;
        graph[b][a]=true;
    }
    dfs(v-1);
    cout << "\n";
    bfs(v-1);
    return 0;
}