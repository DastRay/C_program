#include "MyString.h"

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

char* MyStrcpy(char* dest_, char* src_)
{
   char* tmp = dest_;

   while (*src_)
   {
      *dest_ = *src_;
      dest_++;
      src_++;
   }
   *dest_ = '\0';

   return tmp;
}

char* MyStrcat(char* str1_, const char* str2_)
{
   char* tmp = str1_;

   while (*str1_) {
      str1_++;
   }

   while (*str2_) {
      *str1_ = *str2_;
      str2_++;
      str1_++;
   }
   *str1_ = '\0';

   return tmp;
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


char* MyStrstr(const char* string_, const char* substring_)
{
   char* string_copy = calloc(MyStrlen(string_), sizeof(char));
   unsigned int count = 0;
   char flag = 1;

   for (int i = 0; i < MyStrlen(string_); i++)
   {
      flag = 1;
      if (string_[i] == substring_[0])
      {
         for (int j = 0; substring_[j] != '\0'; j++)
            if (string_[i + j] != substring_[j])
               flag = 0;

         if (flag == 1)
         {
            for (; string_[i] != '\0'; i++)
            {
               string_copy[count] = string_[i];
               count++;
            }
            return string_copy;
         }
      }
   }
   return NULL;
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
