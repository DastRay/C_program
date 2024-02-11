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

int** createTwoDimensionalArray(const int rows, const int cols)
{
   int** array = malloc(rows * sizeof(int*));
   if (!array)
   {
      printf("[!] Ошибка выделения памяти!\n");
      return NULL;
   }

   for (int i = 0; i < rows; i++)
   {
      array[i] = malloc(cols * sizeof(int));
      if (!array[i])
      {
         printf("[!] Ошибка выделения памяти!\n");
         return NULL;
      }
   }

   return array;
}

void printMatrix(const int** matrix, const int rows, const int cols)
{
   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < cols; j++)
      {
         printf("%3d ", matrix[i][j]);
      }
      printf("\n");
   }
   printf("\n");
}

int** readMatrixFromFile(const char* nameFile, const char* mode, const int rows, const int cols)
{
   FILE* file;
   errno_t err = fopen_s(&file, nameFile, mode);

   if (err != 0 || !file)
   {
      perror("File cant't open!");
      return NULL;
   }

   int** matrix = createTwoDimensionalArray(rows, cols);

   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < cols; j++)
      {
         fscanf_s(file, "%d", &matrix[i][j]);
      }
   }

   fclose(file);

   return matrix;
}

long long int maxProductInTable(const int** table, const int rows, const int cols)
{
   int maxProduct = 0;

   // По горизонтали
   for (int i = 0; i < rows; i++) 
   {
      for (int j = 0; j <= cols - 4; j++) 
      {
         int product = table[i][j] * table[i][j + 1] * table[i][j + 2] * table[i][j + 3];
         if (product > maxProduct) 
         {
            maxProduct = product;
         }
      }
   }

   // По вертикали
   for (int i = 0; i <= rows - 4; i++) 
   {
      for (int j = 0; j < cols; j++) 
      {
         int product = table[i][j] * table[i + 1][j] * table[i + 2][j] * table[i + 3][j];
         if (product > maxProduct) 
         {
            maxProduct = product;
         }
      }
   }

   // По диагонали (вправо-вниз)
   for (int i = 0; i <= rows - 4; i++) 
   {
      for (int j = 0; j <= cols - 4; j++) 
      {
         int product = table[i][j] * table[i + 1][j + 1] * table[i + 2][j + 2] * table[i + 3][j + 3];
         if (product > maxProduct) 
         {
            maxProduct = product;
         }
      }
   }

   // По диагонали (влево-вниз)
   for (int i = 0; i <= rows - 4; i++) 
   {
      for (int j = cols - 1; j >= 3; j--) 
      {
         int product = table[i][j] * table[i + 1][j - 1] * table[i + 2][j - 2] * table[i + 3][j - 3];
         if (product > maxProduct) 
         {
            maxProduct = product;
         }
      }
   }

   return maxProduct;
}