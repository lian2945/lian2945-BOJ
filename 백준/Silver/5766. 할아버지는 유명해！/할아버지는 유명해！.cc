#include <iostream>
#include <queue>
using namespace std;
int score[10001];
int main()
{
    int n, m, d, max;
    priority_queue<int> queue;
    cin >> n >> m;
    while(n!=0 && m!=0)
    {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> d;
                score[d]++;
            }
        }
        for(int i=1; i<=10000; i++) {
            queue.push(score[i]);
        }
        max = queue.top(); queue.pop();
        while(max==queue.top()) queue.pop();
        int max = queue.top();
        for(int i=1; i<=10000; i++) {
            if(max == score[i]) cout << i << " ";
            score[i]=0;
        }
        while(!queue.empty()) queue.pop();
        cout << "\n";
        cin >> n >> m;
    }
    
    
    return 0;
}