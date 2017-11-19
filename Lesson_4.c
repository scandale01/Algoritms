#include <stdio.h>

int main()
{
	int a[17];
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	for (int i = 3; i <= 16; i++)
	{
		if (i % 2 == 0) a[i] = a[i - 1] + a[i / 2];
		else
		{
			a[i] = a[i - 1];
		}
		printf("%d", a[i]);
	}
	getchar(%4);
}