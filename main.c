#include <stdio.h>
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

   /////////////////////////// ПРОЕКТ ЭЙЛЕРА ///////////////////////////////////////////////////////////
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

   //(https://euler.jakumo.org/problems/view/6.html)
   //Сумма квадратов первых десяти натуральных чисел равна 1^2 + 2^2 + ... + 10^2 = 385
   //Квадрат суммы первых десяти натуральных чисел равен (1 + 2 + ... + 10)^2 = 552 = 3025
   //Следовательно, разность между суммой квадратов и квадратом суммы первых десяти натуральных чисел составляет 3025 − 385 = 2640.
   //Найдите разность между суммой квадратов и квадратом суммы первых ста натуральных чисел.
   //printf("%llu", Problem_6(100));


   //(https://euler.jakumo.org/problems/view/7.html)
   //Выписав первые шесть простых чисел, получим 2, 3, 5, 7, 11 и 13. Очевидно, что 6 - е простое число - 13.
   //Какое число является 10001 - м простым числом ?
   //printf("%llu", Problem_7(10001));


   //(https://euler.jakumo.org/problems/view/9.html)
   //Тройка Пифагора - три натуральных числа a < b < c, для которых выполняется равенство a2 + b2 = c2
   //Например, 32 + 42 = 9 + 16 = 25 = 52.
   //Существует только одна тройка Пифагора, для которой a + b + c = 1000.
   //Найдите произведение abc.
   //printf("%u\n", Problem_9());
   //Problem_9_1();


   //(https://euler.jakumo.org/problems/view/10.html)
   //Сумма простых чисел меньше 10 равна 2 + 3 + 5 + 7 = 17.
   //Найдите сумму всех простых чисел меньше двух миллионов.
   //printf("%llu", Problem_10(2000000));


   //https://euler.jakumo.org/problems/view/12.html
   //Последовательность треугольных чисел образуется путем сложения натуральных чисел. К примеру, 
   //7 - е треугольное число равно 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. Первые десять треугольных чисел :
   //1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
   //Перечислим делители первых семи треугольных чисел :
   //1 : 1
   //3 : 1, 3
   //6 : 1, 2, 3, 6
   //10 : 1, 2, 5, 10
   //15 : 1, 3, 5, 15
   //21 : 1, 3, 7, 21
   //28 : 1, 2, 4, 7, 14, 28
   //Как мы видим, 28 - первое треугольное число, у которого более пяти делителей.
   //Каково первое треугольное число, у которого более пятисот делителей ?
   printf("%llu", Problem_12(500));




   ////////////////-----Работа с файлами и строками-----//////////////////////////////////////////////////////////////////

   //FILE* file;
   //errno_t err = fopen_s(&file, "file.txt", "r");

   //if (err != 0 || !file)
   //{
   //   perror("File cant't open!");
   //   return 1;
   //}

   /*
   char str[] = "Hello!";
   printf("Длина строки: %d\n", MyStrlen(str));
   */


   /*char line[100];
   printf("Количество считанных символов: %d\n", fGetLine(line, file));
   printf("Считанная строка: %s\n", line);*/


   /*
   char SrcStr[] = "Hello, world!";
   char DestStr[100];
   printf("Скопированная строка: %s\n", MyStrcpy(DestStr, SrcStr));
   */


   /*
   char str1[30] = "Hello, ";
   char str2[] = "world!";
   printf("%s\n", MyStrcat(str1, str2));
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