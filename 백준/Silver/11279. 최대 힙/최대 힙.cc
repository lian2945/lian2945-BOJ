#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    priority_queue<int> arr;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, idx;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> idx;
        if(idx==0)
        {
            if(arr.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << arr.top() << "\n";
                arr.pop();
            }
        }
        else
        {
            arr.push(idx);
        }
    }
    return 0;
}