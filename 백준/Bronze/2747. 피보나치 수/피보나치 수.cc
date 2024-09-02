#include <iostream>
#include <vector>
using namespace std;
vector<int> pib(51, 0);
int pibo(int n) {
    if(n==0) return 0;
    if(n<=2) return 1;
    if(pib[n]!=0) return pib[n];
    return pib[n]=pibo(n-1)+pibo(n-2);
}
int main() {
    int n;
    cin >> n;
    cout << pibo(n);
    return 0;
}