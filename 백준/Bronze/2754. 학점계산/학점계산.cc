#include <iostream>
using namespace std;
int main() {
    char c;
    double res;
    cin >> c;
    if(c=='A') res+=4;
    if(c=='B') res+=3;
    if(c=='C') res+=2;
    if(c=='D') res+=1;
    if(c=='F') {
        printf("%.1lf", 0.0);
        return 0;
    }
    cin >> c;
    if(c=='+') res+=0.3;
    if(c=='0') res+=0.0;
    if(c=='-') res-=0.3;
    printf("%.1lf", res);
    return 0;
}