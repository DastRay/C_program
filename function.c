#include "function.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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

bool isPrime(int num)
{
   if (num < 2)
   {
      return false;
   }

   for (unsigned int i = 2; i * i <= num; i++)
   {
      if (num % i == 0)
      {
         return false;
      }
   }

   return true;
}

unsigned int countOfDivisors(const int number)
{
   unsigned int count = 0;

   for (unsigned int i = 1; i * i <= number; i++)
   {
      if (number % i == 0)
      {
         count += 2;
      }

      if (i * i == number)
      {
         count--;
      }
   }

   return count;
}

unsigned int countOfDivisors_1(const int number)
{
   unsigned int count = 0;

   for (int i = 1; i <= number; i++)
   {
      if (number % i == 0)
      {
         count++;
      }
   }

   return count;
}


char* addStrings(char* num1, char* num2)
{
   int n1 = strlen(num1) - 1;
   int n2 = strlen(num2) - 1;
   int carry = 0, sum = 0;
   int maxLen = (n1 > n2) ? n1 : n2;

   char* result = (char*)malloc(sizeof(char) * (maxLen + 3));
   int i = maxLen + 1;
   result[i + 1] = '\0';

   while (n1 >= 0 || n2 >= 0)
   {
      int d1 = (n1 >= 0) ? num1[n1--] - '0' : 0;
      int d2 = (n2 >= 0) ? num2[n2--] - '0' : 0;
      sum = d1 + d2 + carry;
      result[i--] = sum % 10 + '0';
      carry = sum / 10;
   }

   if (carry) {
      result[i--] = carry + '0';
   }

   return &result[i + 1];
}