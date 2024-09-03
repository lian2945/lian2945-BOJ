#include <iostream>
#include <vector>
using namespace std;
int cnt=0;
vector<int> arr(100, -1);
int pibo(int n) {
    if(arr[n]>=0) return arr[n];
    cnt++;
    return arr[n]=pibo(n-1)+pibo(n-2);
}
int main() {
    int n;
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    cin >> n;
    cout << pibo(n) << " " << cnt;
    return 0;
}