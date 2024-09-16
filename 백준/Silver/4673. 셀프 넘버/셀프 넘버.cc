#include <stdio.h>

int self(int a)
{
	int t, j;
	for (int i = 1;i <= a;i++)
	{
		t = i;
		j = i;
		while (j > 0)
		{
			t += j % 10;
			j /= 10;
		}
		if (t == a) return 0;
	}
	return 1;
}

int main(void)
{
	int a, b, t=0;
	for (int i = 1;i <= 10000;i++)
	{
		if (self(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
