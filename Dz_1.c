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
	printf("Enter month number\n");
	scanf("%d", &month);
	if (true)
	{

	}
}

int main(int argc, const char *argv[] ) {
	//massIndex(96, 1.76);
	//maxOutOfFour(8, 2, 7, 1);
	//valueExchange(4, 10);
	//sqrtOfvalem();
	yearTime();
	return 0;
}