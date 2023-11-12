#include "function.h"
#include <stdbool.h>
#include <string.h>

int Mult2(int value_)
{
	return value_ * 2;
}


int Prime(unsigned long long int x)
{
	if (x % 2 == 0)
		return 0;

	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
		if (x % n == 0)
			return 0;

	return 1;
}

bool IsPalindrome(const unsigned int number_)
{
	unsigned int original = number_;
	unsigned int reverse = 0;

	while (original > 0)
	{
		unsigned char d = original % 10;
		reverse = reverse * 10 + d;
		original /= 10;
	}

	return number_ == reverse;
}


unsigned int StrLen(const char* str_)
{
	const char* p = str_;
	while (*p++);
	{
		return((p - 1) - str_);
	}
}

void СopyStr(char* src_, char* dest_)
{	
	if (!src_ || !dest_)
		return NULL;

	while (*src_) 
	{
		*dest_ = *src_;
		dest_++;
		src_++;
	}
	*dest_ = '\0';
}

void StrCat(char* str1_, const char* str2_) 
{
	while (*str1_) {
		str1_++;
	}

	while (*str2_) {
		*str1_ = *str2_;
		str2_++;
		str1_++;
	}
	*str1_ = '\0';
}

void СompareStr(const char* str1, const char* str2) {
	int count = 0;

	while (str1[count] && (str1[count] == str2[count])) {
		count++;
	}
	int res = str1[count] - str2[count];

	if (res == 0) 
	{
		printf("Строки одинаковы\n");
	}
	else
	{
		if (res < 0)
		{
			printf("Первая строка меньше второй\n");
		}
		else
		{
			printf("Первая строка длиннее первой\n");
		}
	}
}