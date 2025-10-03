#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a;
    cin >> a;

    double circumference = 2 * sqrt(a * M_PI);

    cout.precision(10);
    cout << circumference << endl;

    return 0;
}
