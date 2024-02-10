#pragma once

typedef struct NongNumber
{
	unsigned char* digits;
	unsigned int lenght;
} LongNumber;

/*
* @breaf сумма двух больших чисел
* @param n1_ - первое складываемое число, n2_ - второе складываемое число
* @return сумма n1_ и n2_
*/
LongNumber* Sum(const LongNumber* n_1, const LongNumber* n_2);