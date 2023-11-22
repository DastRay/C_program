#include "function.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

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


int fGetLine(char* line_, FILE* f_)
{
	{
		char* CopyLine = line_;
		if (f_ == NULL)
		{
			perror("File cant't open!");
			return 0;
		}

		while (1)
		{
			char c = fgetc(f_);
			if (c == '\n' || c == EOF)
				break;
			else
			{
				*CopyLine = c;
				CopyLine++;
			}

		}
		*CopyLine = '\0';

		return strlen(line_); // длина считанной строки
	}
}

unsigned int StrLen(const char* str_)
{
	const char* p = str_;
	while (*p++);
	{
		return((p - 1) - str_);
	}
}
int MyStrLen(char* str_)
{
	int n = 0;
	for (; str_[n]; n++);
	return n;
}

void СopyStr(char* src_, char* dest_)
{	
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
		printf("Длины строк равны\n");
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

/* not working
void ReadLine(FILE* file_, char* line_)
{
	int linelen = 0;

	while (fgetc(file_) != '\n' && fgetc(file_) != EOF)
	{
		line_[linelen++] = fgetc(file_);
	}

	line_[linelen] = '\0';
}
*/

