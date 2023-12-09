#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#include "function.h"
#include "Euler.h"
#include "MyString.h"


#define SIZE 2

int main()
{
   setlocale(LC_ALL, "Rus");

   /*int value = 0;
   int array[SIZE];

   printf("value = ");
   scanf_s("%d", &value);

   printf("array = ");
   for (unsigned int i = 0; i < SIZE; ++i)
       scanf_s("%d", &array[i]);

   printf("answer = %llu\n", Problem_1(value, array, SIZE));
   */

   /*int value = 0;
   printf("value = ");
   scanf_s("%d", &value);

   printf("answer = %llu\n", Problem_2(value));
   */

   /*
   long long value_ = 0;
   printf("value = ");
   scanf_s("%llu", &value_);
   printf("answer = %llu\n", Problem_3(value_));
   */
   //600851475143  13195

   /*
   printf("%llu", Problem_4());
   */

   /*
   printf("%llu\n", Problem_5(20));
   */

   /*
   unsigned int quantity = 0;
   printf("quantity = ");
   scanf_s("%d", &quantity);
   printf("answer = %d\n", Problem_6(quantity));
   */


   ////////////////-----Работа с файлами и строками-----//////////////////////////////////////////////////////////////////

   FILE* file;
   errno_t err = fopen_s(&file, "file.txt", "r");

   if (err != 0 || !file)
   {
      perror("File cant't open!");
      return 1;
   }

   /*
   char* str = "Hello!";
   printf("%d\n", MyStrlen(str));
   */

   /*
   char line[100];
   printf("Количество считанных символов: %d\n", fGetLine(line, file));
   printf("Считанная строка: %s\n", line);
   */

   /*
   char SrcStr[] = "Hello, world!";
   char DestStr[100];
   MyStrcpy(DestStr, SrcStr);
   printf("Скопированная строка: %s\n", DestStr);
   */

   /*
   char str1[30] = "Hello, ";
   char str2[] = "world!";
   MyStrcat(str1, str2);
   printf("%s\n", str1);
   */

   /*
   char* str1 = "Hella";
   char* str2 = "Hello";
   printf("%d\n", MyStrcmp(str1, str2));
   */

   
   /*
   char str[] = "Строка Яя!";
   printf("Исходная строка: %s\n", str);
   Replace(str);
   printf("Измененная строка: %s\n", str);
   */
   

   /*
   char haystack[] = "Hello, World!";
   char needle[] = "World";
   printf("%s", MyStrstr(haystack, needle));
   */

   return 0;
}



