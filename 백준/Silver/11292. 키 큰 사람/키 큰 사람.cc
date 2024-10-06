#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<double, int> a, pair<double, int> b) {
    if(a.first>b.first) return true;
    else if(a.first==b.first && a.second<b.second) return true;
    else return false;
}

int main() {
    int n=1;
    double d;
    double max;
    string name;
    vector<pair<double, int>> height(50);
    vector<string> names(50);
    while(n) {
        cin >> n;
        if(!n) break;
        height.resize(n);
        for(int i=0;i<n;i++) {
            cin >> name >> d;
            height[i].first = d;
            height[i].second = i+1;
            names[i] = name;
        }
        sort(height.begin(), height.end(), cmp);
        max = height[0].first;
        cout << names[height[0].second-1] << " ";
        for(int i=1;i<n;i++) {
            if(max!=height[i].first) break;
            cout << names[height[i].second-1] << " ";
        }
        for(int i=0;i<n;i++) {
            height[i].first=0.0;
            height[i].second=0;
            names[i]="";
        }
        cout << "\n";
    }
    return 0;
}