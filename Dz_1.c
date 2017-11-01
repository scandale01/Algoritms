/*Domawnaja rabota po kursu algoritmq i strukturq dannqh
U4enik: Serov Vyacheslav*/

#include <stdio.h>
#include <math.h>
//Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h);
//где m-масса тела в килограммах, h - рост в метрах.
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
//Найти максимальное из четырех чисел. Массивы не использовать.
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
//Написать программу обмена значениями двух целочисленных переменных:
void valueExchange(int a, int b) {
	printf("a = %d, b = %d\n", a, b);
	a = a^b;
	b = b^a;
	a = a^b;
	printf("a = %d, b = %d\n", a, b);
}
//Написать программу нахождения корней заданного квадратного уравнения.
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
//С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
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
/*
//Ввести a и b и вывести квадраты и кубы чисел от a до b.
int power(int x, int y) {
	int num = y;
	for (int i = 1; i < x; i++ )
	{
		y *= num;
	}
	return y;
}*/
//16. Реализовать алгоритм ускоренного возведения в степень.
int powerUpgrade(int num, int stepen) {
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
void inPower() {
	int a, b;
	printf("Enter number A\n");
	scanf("%d", &a);
	printf("Enter number B\n");
	scanf("%d", &b);
	printf("Square A = %d, cube A = %d\n", powerUpgrade(a, 2), powerUpgrade(a, 3));
	printf("Square B = %d, cube B = %d\n", powerUpgrade(b, 2), powerUpgrade(b, 3));
}
/*Даны целые положительные числа N и K. Используя только операции сложения
и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.*/
void chastnoeOtDelenija() {
	int n, k, counter, x, y;
	printf("Vvedite 4islo N\n");
	scanf("%d", &n);
	printf("Vvedite 4islo K\n");
	scanf("%d", &k);
	counter = 0;
	while (n >= k)
	{
		counter++;
		n -= k;
	}
	printf("4islo %d delitsja na %d rovno %d raz\n", n, k, counter);
	printf("Ostatok ot delenija %d\n", n);
}
/*Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка
от деления определить, имеются ли в записи числа N нечетные цифры.
Если имеются, то вывести True, если нет — вывести False.*/
void nomerDesjat(){
	int n;
	printf("Vvedite N:");
	scanf("%i", &n);
	while ((n>0)&((n % 10) != 2)) {
		n /= 10;
	}
	printf("%s\n", ((n>0)&((n % 10) == 2)) ? "True" : "False");
	return 0;
}
/*С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее
арифметическое всех положительных четных чисел, оканчивающихся на 8.
*/
/*
void nomerOdinatcat() {
	int n;
	int s = 0, count = 0;
	printf("Vvedite 4islo, dlja vqhoda vvedite 0\n");
	scanf("%d", &n);
	while (n != 0)
	{
		if ((n > 0) & ((n % 2) == 0))
		{
			while ((n / 10) < 10)
			{	
			n /= 10;
			}
			if ((n % 8) == 8)
			{
				s += n;
				count++;
			}
		}
		printf("Vvedite 4islo, dlja vqhoda vvedite 0\n");
		scanf("%d", &n);
	}
	printf("Srednee arefmeti4esko ... ravno %d \n", s / count);
}*/
//Написать функцию нахождения максимального из трех чисел.
void nomerDvenadcat() {
	int m[3];
	printf("Vvedite tri 4isla\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &m[i]);
	}
	int max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (m[i] > max)
		{
			max = m[i];
		}
	}
	printf("Maximum: %d \n", max);
}

int main(int argc, const char *argv[] ) {
	//massIndex(96, 1.76);
	//maxOutOfFour(8, 2, 7, 1);
	//valueExchange(4, 10);
	//sqrtOfvalem();
	//yearTime();
	//inPower();
	//chastnoeOtDelenija();
	//nomerDesjat();
	nomerOdinatcat();
	//nomerDvenadcat();
	return 0;
}