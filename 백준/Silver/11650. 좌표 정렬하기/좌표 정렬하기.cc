#include <iostream>
#include <algorithm>
using namespace std;

struct map {
    int x;
    int y;
};

bool cmp(map a, map b) {
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    map maps[n];
    for(int i=0;i<n;i++) {
        cin >> maps[i].x >> maps[i].y;
    }
    sort(maps, maps+n, cmp);
    for(int i=0;i<n;i++) {
        cout << maps[i].x << " " << maps[i].y << "\n";
    }
    return 0;
}