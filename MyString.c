#include "MyString.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


unsigned int fGetLine(char* line_, FILE* f_)
{  
   unsigned int linelen = 0;
   char* copyline = line_;

   while (1)
   {
      char c = fgetc(f_);
      if (c == '\n' || c == EOF)
         break;
      else
      {
         *copyline = c;
         copyline++;
         linelen++;
      }
   }
   *copyline = '\0';

   return linelen;
}

unsigned int MyStrlen(const char* str_)
{
   const char* p = str_;
   while (*p++);
   {
      return((p - 1) - str_);
   }
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

int MyStrcmp(const char* str1, const char* str2)
{
   int count = 0;

   while (str1[count] && (str1[count] == str2[count])) 
   {
      count++;
   }
   return str1[count] - str2[count];
}

void Replace(char* str_) 
{
   int i = 0;

   while (str_[i] != '\0') 
   {
      if (str_[i] == 'я' || str_[i] == 'Я')
      {
         str_[i] = ' ';
      }
      else 
      {
         str_[i] = str_[i] + 1;
      }
      i++;
   }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char* fGetLine1_1(char* line_, FILE* f_)
{
   char* copyline = line_;

   while (1)
   {
      char c = fgetc(f_);
      if (c == '\n' || c == EOF)
         break;
      else
      {
         *copyline = c;
         copyline++;
      }
   }
   *copyline = '\0';

   return line_;
}

unsigned int MyStrlen1_1(const char* str_)
{
   unsigned int n = 0;
   for (; str_[n]; n++);
   return n;
}

void MyStrcmp1_1(const char* str1, const char* str2)
{
   int count = 0;

   while (str1[count] && (str1[count] == str2[count])) 
   {
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
char* fgetline(char* line_, FILE* f_)
{
   int linelen = 0;
   while (!feof(f_) && fgetc(f_) != '\n')
      linelen++;

   fseek(f_, -(linelen + 2), SEEK_CUR);

   char* CopyLine = malloc(linelen * sizeof(char) + 1);
   if (!CopyLine)
      return(NULL);

   int i = 0;
   while (1)
   {
      char c = fgetc(f_);
      if (c == '\n' || c == EOF)
         break;
      else
      {
         *CopyLine = c;
         i++;
      }
   }
   *CopyLine = '\0';

   return CopyLine;
}
*/