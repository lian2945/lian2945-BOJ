#include <iostream>
using namespace std;
int main() {
    int n,d=0;
    string s;
    cin >> n;
    cin >> s;
    for(auto i : s){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u') {
            d++;
        }
    }
    cout << d;
    return 0;
}