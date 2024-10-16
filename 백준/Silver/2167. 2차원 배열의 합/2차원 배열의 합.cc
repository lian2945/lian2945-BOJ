#include <stdio.h>
int main() {
	int n, m, d, t=0;
	int stw, sth, endw, endh;
	int a[300][300];
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &d);
	for(int i=0;i<d;i++) {
		scanf("%d %d %d %d", &stw, &sth, &endw, &endh);
		stw--;
		sth--;
		endw--;
		endh--;
		t=0;
		for(int j=stw;j<=endw;j++) {
			for(int k=sth;k<=endh;k++) {
				t+=a[j][k];
			}
		}
		printf("%d\n", t);
	}
	return 0;
}
