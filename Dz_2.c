/*Homework number 2, Algoritms and data structures.
Student: Vyacheslav Serov
*/
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
void recursionTenToDouble (int n) {
	if (n)
	{
		int b = n % 2;
		recursionTenToDouble(n /= 2);
		printf("%d", b);
	}
}

/*1. Реализовать функцию перевода из 10 системы в двоичную используя рекурсию.*/
void fromTentoDoubleSystem() {
	int number;
	printf("Enter number for convertion\n");
	scanf("%d", &number);
	recursionTenToDouble(number);
	return 0;
}

/*Реализовать функцию возведения числа a в степень b:

a. без рекурсии;
b. рекурсивно;
c. *рекурсивно, используя свойство чётности степени.*/
int inPowerA(int num, int stepen) {
	int n, s, k;
	n = 1;
	s = num;
	k = stepen;
	while (k != 0)
	{
		if ((k % 2) == 0)
		{
			s *= s;
			k = k / 2;
		}
		else
		{
			k--;
			n *= s;
		}
	}
	return n;
}
int inPowerB(int num, int stepen) {
	if (stepen == 0)
	{
		return 1;
	}
	
	return num * inPowerB(num, stepen-1);
}
void inPower() {
	int a, b;
	printf("Enter number\n");
	scanf("%d", &a);
	printf("Enter number power number\n");
	scanf("%d", &b);
	printf("Number: %d\n", inPowerB(a, b));
}
int main(int argc, const char *argv[]) {
	//F(6);
	//sumDigit(23);
	//fromTentoDoubleSystem();
	inPower();
	return 0;
}