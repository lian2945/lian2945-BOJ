#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, idx, l=0, k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> idx;
        pq.push(idx);
    }
    for(int i=0;i<n-1;i++)
    {
        l+=pq.top();
        k=pq.top();
        pq.pop();
        l+=pq.top();
        k+=pq.top();
        pq.pop();
        pq.push(k);
    }
    cout << l;
}