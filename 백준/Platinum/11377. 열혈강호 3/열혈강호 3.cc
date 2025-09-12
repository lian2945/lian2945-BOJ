#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> adj[1001];
int match[1001];
bool visited[1001];

bool dfs(int x) {
    for(int work : adj[x]) {
        if(visited[work]) continue;
        visited[work] = true;
        
        if(match[work] == 0 || dfs(match[work])) {
            match[work] = x;
            return true;
        }
    }
    return false;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    for(int i = 1; i <= n; i++) {
        int cnt;
        cin >> cnt;
        for(int j = 0; j < cnt; j++) {
            int work;
            cin >> work;
            adj[i].push_back(work);
        }
    }
    
    int result = 0;
    
    for(int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        if(dfs(i)) {
            result++;
        }
    }
    
    for(int i = 1; i <= n && k > 0; i++) {
        memset(visited, false, sizeof(visited));
        if(dfs(i)) {
            result++;
            k--;
        }
    }
    
    cout << result << endl;
    return 0;
}