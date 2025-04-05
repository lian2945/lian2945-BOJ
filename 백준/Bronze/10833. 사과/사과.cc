#include <iostream>
using namespace std;

int main() {
	int n, result = 0;
    int s, a;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> s >> a;
		int cnt = a/s;
		int total = cnt*s;
		result += a-total;
	}
	cout << result << endl;
}