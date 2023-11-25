#include "function.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

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



