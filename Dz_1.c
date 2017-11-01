/*Domawnaja rabota po kursu algoritmq i strukturq dannqh
U4enik: Serov Vyacheslav*/

#include <stdio.h>
#include <math.h>

void massIndex(int mass, float h) {
	if (mass == 0 || h == 0)
	{
		printf("Ne vernqj vvod");
		return 0;
	}	else
	{
		float d = mass / (h*h);
		printf("Indeks vesa polu4ilsja %f\n", d);
	}

}

void maxOutOfFour(int one, int two, int three, int four) {
	int result;
	if (one > two)
	{
		result = one;
	}
	else
	{
		result = two;
	}
	if (result < three)
	{
		result = three;
	}
	if (result < four)
	{
		result = four;
	}
	printf("Max value is: %d\n", result);
}

void valueExchange(int a, int b) {
	printf("a = %d, b = %d\n", a, b);
	a = a^b;
	b = b^a;
	a = a^b;
	printf("a = %d, b = %d\n", a, b);
}

void sqrtOfvalem()
{
	int a, b, c, d;
	float x1, x2, t;

	printf("Enter a: ");
	scanf("%d", &a);
	if (a == 0) {
		printf("No sqrt\n");
		return;
	}
	printf("Enter b: ");
	scanf("%d", &b);

	printf("Enter c: ");
	scanf("%d", &c);

	d = (b * b) - 4 * a * c;
	if (d < 0) {
		printf("No any results, sqrt is less then 0.\n");
		return;
	}
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	t = (-b) / (2 * a);

	if (d > 0) {
		printf("x1 = %.3f\n", x1);
		printf("x2 = %.3f\n", x2);
	}
	if (d == 0) {
		printf("x = %.3f\n", t);
	}
}
void yearTime() {
	int month;
	printf("Enter month number(1-12)\n");
	scanf("%d", &month);
	if (month == 12 || month ==1 || month == 2)
	{
		printf("Winter\n");
		return 0;
	} 
	if (month == 3 || month == 4 || month == 5)
	{
		printf("Autumn\n");
		return 0;
	}
	if (month == 6 || month == 7 || month == 8)
	{
		printf("Summer\n");
		return 0;
	}
	if (month == 9 || month == 10 || month == 1)
	{
		printf("Winter\n");
		return 0;
	}
	else
	{
		printf("Fault value was entered.\n");
	}
}

int power(int x, int y) {
	int num = y;
	for (int i = 1; i < x; i++ )
	{
		y *= num;
	}
	return y;
}
void inPower() {
	int a, b;
	printf("Enter number A\n");
	scanf("%d", &a);
	printf("Enter number B\n");
	scanf("%d", &b);
	printf("Square A = %d, cube A = %d\n", power(2, a), power(3, a));
	printf("Square B = %d, cube B = %d\n", power(2, b), power(3, b));
}
void 

int main(int argc, const char *argv[] ) {
	//massIndex(96, 1.76);
	//maxOutOfFour(8, 2, 7, 1);
	//valueExchange(4, 10);
	//sqrtOfvalem();
	//yearTime();
	//inPower();
	return 0;
}