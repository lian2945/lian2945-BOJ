#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long int n, t = 0;
    vector<unsigned long long> hap;
    vector<int> source;
    cin >> n;
    source.resize(n);
    hap.resize(n);
    for(int i=0; i<n; i++)
    {
        cin >> source[i];
        if(i==0) hap[i] = source[i];
        else hap[i] = hap[i-1] + source[i];
    }
    for(int i=0; i<n; i++) 
    {
        t += (hap[n-1]-hap[i]) * source[i];
        t %= 1000000007;
    }
    cout << t;
    return 0;
}