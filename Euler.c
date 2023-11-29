#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "Euler.h"
#include "function.h"

unsigned long long Problem_1(const unsigned int value_, const int* multiples_, const unsigned int size_)
{
	unsigned long long sum = 0;

	for (unsigned int number = 0; number < value_; ++number)
	{
		for (unsigned int i = 0; i < size_; ++i)
		{
			if (number % multiples_[i] == 0)
			{
				sum += number;
				break;
			}

		}
	}
	return sum;
}


unsigned long long Problem_2(const unsigned int value_)
{
	unsigned long long sum = 0;
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;

	while (fib2 < value_)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		unsigned int prom = fib1;
		fib1 = fib2;
		fib2 = fib1 + prom;
	}

	return sum;
}



unsigned long long Problem_3(const unsigned long long value_)
{
	unsigned long long delmax_ = value_;
	unsigned long long del_ = 2;

	while (del_ < delmax_)
	{
		if (delmax_ % del_ == 0)
		{
			if (Prime(del_) == 1)
			{
				while (delmax_ % del_ == 0)
				{
					delmax_ /= del_;
				}
			}
		}
		del_ += 1;
	}
	return delmax_;
}

unsigned long long Problem_4()
{
	long long int resultmax = 0;
	for (unsigned int n_1 = 100; n_1 < 1000; ++n_1)
	{
		for (unsigned int n_2 = 100; n_2 < 1000; ++n_2)
		{
			unsigned int mult = n_1 * n_2;
			if (IsPalindrome(mult))
			{
				if (mult > resultmax)
					resultmax = mult;
			}
		}
	}
	return resultmax;
}

unsigned long long Problem_5(const unsigned int value_)
{	
	unsigned int number = 1;
	while (1)
	{
		bool flag = true;
		for (unsigned int del = 1; del <= value_; ++del)
		{
			if (number % del != 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			return number;

		number++;
	}
}

unsigned long long Problem_6(const unsigned int n_)
{	
	unsigned long long int sum_1 = 0;
	unsigned long long int sum_2 = 0;

	for (unsigned long long int i = 1; i <= n_; ++i)
	{
		sum_1 = sum_1 + (i * i);
		sum_2 = sum_2 + i;
	}

	return  (sum_2 * sum_2 - sum_1);
}
