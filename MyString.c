#include "MyString.h"

#include <string.h>
#include <stdio.h>

int fGetLine(char* line_, FILE* f_)
{
   {
      char* CopyLine = line_;

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

      return MyStrlen(line_); // длина строки
   }
}

unsigned int MyStrlen(const char* str_)
{
   const char* p = str_;
   while (*p++);
   {
      return((p - 1) - str_);
   }
}

int MyStrlen1(char* str_)
{
   int n = 0;
   for (; str_[n]; n++);
   return n;
}

void MyStrcpy(char* src_, char* dest_)
{
   while (*src_)
   {
      *dest_ = *src_;
      dest_++;
      src_++;
   }
   *dest_ = '\0';
}

void MyStrcat(char* str1_, const char* str2_)
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

void MyStrcmp(const char* str1, const char* str2)
{
   int count = 0;

   while (str1[count] && (str1[count] == str2[count])) {
      count++;
   }
   int res = str1[count] - str2[count];

   if (res == 0)
   {
      printf("Строки равны\n");
   }
   else
   {
      if (res < 0)
      {
         printf("Первая строка меньше второй\n");
      }
      else
      {
         printf("Первая строка больше второй\n");
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