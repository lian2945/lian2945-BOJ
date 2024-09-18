#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n;
    int tmp;
    deque<int> d;
    cin >> n;
    for(int i=n;i>0;i--) {
        d.push_front(i);
        for(int j=i;j>0;j--) {
            tmp=d.back();
            d.pop_back();
            d.push_front(tmp);
        }
    }
    while(!d.empty()) {
        cout << d.front() << " ";
        d.pop_front();
    }
    return 0;
}