#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    char name[20];
    int d,m,y;
} birth;

bool cmp(birth& a, birth& b) {
    if(a.y==b.y) {
        if(a.m==b.m) {
            return a.d>b.d;
        }
        else return a.m>b.m;
    }
    else return a.y>b.y;
}

int main() {
    int n;
    cin >> n;
    vector<birth> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i].name >> arr[i].d >> arr[i].m >> arr[i].y;
    }
    sort(arr.begin(), arr.end(), cmp);
    cout << arr[0].name << "\n" << arr[n-1].name;
    return 0;
}