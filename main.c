#include<stdio.h>
#include"function.h"
#include "Euler.h"

#define SIZE 2

// ������ ��� ����� � ���� ����������� N, ��� ����� ������� �� ������� ��������

int main()
{
	/*int value = 0;
	int array[SIZE];

	printf("value = ");
	scanf_s("%d", &value);

	printf("array = ");
	for (unsigned int i = 0; i < SIZE; ++i)
		scanf_s("%d", &array[i]);

	printf("answer = %llu\n", Problem_1(value, array, SIZE));
	*/
	
	int value = 0;
	printf("value = ");
	scanf_s("%d", &value);

	printf("answer = %llu\n", Problem_2(value));

	return 0;
}