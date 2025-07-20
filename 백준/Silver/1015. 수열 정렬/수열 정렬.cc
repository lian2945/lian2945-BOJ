#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    if (a.first == b.first) {
        return a.second.first < b.second.first;
    }
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first;
        v[i].second.first = i;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<n; i++) {
        v[i].second.second = i;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == v[j].second.first) {
                cout << v[j].second.second << " ";
                break;
            }
        }
    }
    
    return 0;
}