#include "LongNumber.h"
#include <stdlib.h>

LongNumber* Sum(const LongNumber* n_1, const LongNumber* n_2)
{
	LongNumber* result = malloc(sizeof(LongNumber));
	if (!result)
		return NULL;

	if (n_1 > n_2)
		result->digits = malloc(sizeof(n_1->lenght));
	else
		result->digits = malloc(sizeof(n_2->lenght));

	unsigned int sub = n_1->lenght - n_2->lenght; // отнимаем первую длину от второй
	for (unsigned int i = n_2->lenght; i > 0; --i) // идём от последнего числа в массиве к первому
	{
		unsigned int sum = n_1->digits[i + sub] + n_2->digits[i]; // сумма чисел в массиве с одинаковыми индексами
		unsigned int q1 = sum / 10;
		unsigned int q2 = sum % 10; // сумма 2 чисел
		result->digits[i] = q2; // присваеваем сумму к элементу (который мы взяли)
		n_1->digits[i + sub + 1] += q1; //если сумма двух чисел >= 10, то прибавляем к следующему элементу в массиве(число 10)
	}
	return result;
}