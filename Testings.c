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

void push(char variable) { //��� ��� ��������� golova ����������,
										//�� ���������� ���������� ��������� �� ���������.
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
	int val; //���� �� ��������� ��������� head �� ��������� �������, 
			//�� �� �������� ����� ������� � �� ������ ��� ������� � ��� ����� ������� ��� ��������.
			//��� ����� ���������� ������� ������� ��������� ����������, 
			//������� ����� ������� ����� ������� ��������
	Uzel *prev = NULL; //�� ��������, ��� ���������� ��������� �� NULL ������.
	if (golova == NULL)
	{
		exit(-1);
	}
	prev = (*golova);
	val = prev->next; //��� ����� ����� ����� ������� ������ ������� � ������� ��� ��������
	free(prev);
	return val;
}

/*��� ��� �� ����� ����� ������ ������� ��������, �� ������������ �������� 
��������� �� n-�� ����� ���������������� ������� ���� ��������� ������.
��� ����, ����� �������� ��������� �������, ����� ������� � ����
����� ��������� next �������� ����*/
Uzel* getNth(Uzel* head, int n) {
	int counter = 0;
	while (counter < n && head) {
		head = head->next;
		counter++;
	}
	return head;
}

/*��� ���������� ���������� �������� ����� ���������� ���� �� ������ �������� �� ��� ���,
���� ��������� next ������ �� ��������� �� ������ ������ NULL*/
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