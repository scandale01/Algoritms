#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct TUzel
{
	char value;
	struct TUzel *next;
};
typedef struct TUzel Uzel;

struct stek
{
	Uzel *golova;
	int size;
	int maxSize;
};
struct stek stek;

void push(char variable) { //“ак как указатель golova измен€етс€,
										//то необходимо передавать указатель на указатель.
	if (stek.size >= stek.maxSize)
	{
		printf("Stack is full");
		return;
	}
	Uzel *tmp = (Uzel*)malloc(sizeof(Uzel));
	tmp->value = variable;
	tmp->next = stek.golova;
	stek.golova = tmp;
	stek.size++;
}
void pop(Uzel **golova){
	//Uzel *prev = NULL;
	int val; //≈сли мы перекинем указатель head на следующий элемент, 
			//то мы потер€ем адрес первого и не сможем его удалить и тем более вернуть его значени€.
			//ƒл€ этого необходимо сначала создать локальную переменную, 
			//котора€ будет хранить адрес первого элемента
	Uzel *prev = NULL; //Ќе забываем, что необходимо проверить на NULL голову.
	if (golova == NULL)
	{
		exit(-1);
	}
	prev = (*golova);
	val = prev->next; //”же после этого можно удалить первый элемент и вернуть его значение
	free(prev);
	return val;
}

/*“ак как мы знаем адрес только первого элемента, то единственным способом 
добратьс€ до n-го будет последовательный перебор всех элементов списка.
ƒл€ того, чтобы получить следующий элемент, нужно перейти к нему
через указатель next текущего узла*/
Uzel* getNth(Uzel* head, int n) {
	int counter = 0;
	while (counter < n && head) {
		head = head->next;
		counter++;
	}
	return head;
}

/*ƒл€ нахождение последнего элемента будем передирать друг за другом элементы до тех пор,
пока указатель next одного из элементов не станет равным NULL*/
Uzel* getLast(Uzel *golova) {
	if (golova == NULL) {
		return NULL;
	}
	while (golova->next) {
		golova = golova->next;
	}
	return golova;
}

int main(int argc, const char *argv[]) {
	Uzel *golova = NULL;
	stek.maxSize = 100;
	//char a = 'A';
	push('h');
	push('e');
	for (int i = 0; i < stek.size; i++)
	{
		printf("%s", (stek.golova->value));
		printf("%s", stek.golova->next->value);
	}
	getch();
}