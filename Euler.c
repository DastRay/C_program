#include<stdio.h>
#include<math.h>

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
	unsigned long long delmax_ = 0;
	unsigned long long del_ = 1;

	while (del_ < value_)
	{
		if (value_ % del_ == 0)
		{
			if (Prime(del_) == 1)
			{

				delmax_ = del_;
				printf("%llu\n", delmax_);

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

