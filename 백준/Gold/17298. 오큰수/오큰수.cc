#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n, d;
    stack<int> data;
    stack<int> big;
    stack<int> result;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> d;
        data.push(d);
    }
    while(!data.empty())
    {
        if(!big.empty())
        {
            while(!big.empty() && data.top() >= big.top())
            {
                big.pop();
            }
            if(big.empty())
            {
                result.push(-1);
                big.push(data.top());
                data.pop();
            }
            else
            {
                result.push(big.top());
                big.push(data.top());
                data.pop();
            }
        }
        else
        {
            result.push(-1);
            big.push(data.top());
            data.pop();
        }
    }
    while(!result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }
    return 0;
}