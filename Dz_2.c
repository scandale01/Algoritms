#include <stdio.h>
/*
int G(int n);
int F(int n) {
	if (n > 2)
	{
		return F(n - 1) + G(n - 2);
	}
	else
	{
		return n;
	}
}
int G(int n) {
	if (n > 2)
	{
		return G(n - 1) + F(n - 2);
	}
	else
	{
		return 3 - n;
	}
}*/
/*int sumDigit(long a) {
	if (a == 0)
	{
		return 0;
	}
	else
	{
		return sumDigit(a/10) + a%10;
	}
}*/

int main(int argc, const char *argv[]) {
	//F(6);
	sumDigit(23);
	return 0;
}