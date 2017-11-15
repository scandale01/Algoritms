/*Homework number 5
Student: Vyacheslav Serov
Algoritms and data structures
*/

#include <stdio.h>
#include <malloc.h>
int STACKARRAY[1000];
/*
void push(int dbl, int *N) {
		if (*N < 1000)
	{
		(*N)++;
		STACKARRAY[*N] = dbl;
	}
	else
	{
		printf("Stack overflow");
	}
}
int pop(int *N) {
	if (*N != -1)
	{
		return STACKARRAY[(*N)--];
	}
	else
	{
		printf("Stack is empty");
	}
}

void fromTenToDoubleStack() {
	int N = -1;
	printf("Enter number for convertion\n");
	int number;
	scanf("%d", &number);
	while (number)
	{
		int b = number % 2;
		push(b, &N);
		number /= 2;
	}
	while (N != -1) {
		printf("%d", pop(&N));
	}
}
*/
	
struct TNode //для двусвязного спика, где есть head tail
{
	char value;
	struct TNode *next; //создаем внутри структуры указатель на самих себя (след. элемент списка)
	struct TNode *prev; //создаем внутри структуры указатель на самих себя (предыдущий элемент списка)
};
typedef struct TNode Node; //даем структуре короткое название Node
							//что бы не писать каждый раз struct TNode

/*Опишем структуру Stack и глобальную переменную Stack. Это позволит структурировать программу, а
также,​ ​при​ ​желании,​ ​даст​ ​возможность​ ​создавать​ ​несколько​ ​независимых​ ​стеков.*/

struct Stack
{
	Node *head;
	int size;
	int maxSize;
};
struct Stack Stack;
void push(char value) {
	if (Stack.size >= Stack.maxSize) //проверка на возможность добавить в стек
	{
		printf("Stack is full");
		return;
	}
	Node *tmp; //создали указатель на узел
	tmp = (Node*) malloc(sizeof(Node)); //выделяем память через malloc и сохраняем ссылку
	//далее записываем данные в новый узел
	tmp->value = value; // ​записываем​ ​данные 
	tmp->next = Stack.head; // записываем предыдущее значение головы
	Stack.head = tmp; // голова теперь указывает на вновь​ созданный элемент
	Stack.size++; // увеличиваем количество элементов в стеке
}
char pop() {
	if (Stack.size == 0)
	{
		printf("Stack is empty");
		return;
	}
	Node* next = NULL; // создаем временный указатель
	char value; //значение на верху списка
	value = Stack.head->value; //т.к. мы должны удалить вершину списка,
								//требуется предварительно сохранить данные вершины
	next = Stack.head->value; //запоминаем значение головы во временной переменной
	Stack.head = Stack.head->next; //записываем в голову предыдущий элемент
	free(next); //запись, на которую указывала голова, удаляем, ибо утечка памяти
	Stack.size--; //уменьшаем кол-во элементов в стеке
	return value; //и возвращаем значение
}
void bracketCheck() {
	Stack.maxSize = 20; // максимальный размер стека, для скобок зватит
	Stack.head = NULL; //сперва голова никуда не указывает
}
void printStack() { //печатаем стек
	Node *current = Stack.head;
	while (current!=NULL) //пока не встретим NULL, тобишь самый конец или начало
	{
		printf("%c", current->value); //выводим значение
		current = current->next; //меняем значение на следующее
	}
}

int main(int argc, const char *argv[]) {
	//fromTenToDoubleStack();
}