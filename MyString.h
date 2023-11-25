#pragma once
#include <string.h>
#include <stdio.h>
/*
* @breaf функция считывающая одну строку из файла
* @param line_: строка, в которую считываем
* @param FILE* f_: файл, из которого считваем строку
* @return длина строки
*/
int fGetLine(char* line_, FILE* f_);
/*
* @breaf функция подсчитывающая длину строки
* @param str_: строка, длину которой подсчитываем
* @return длина строки
*/
unsigned int MyStrlen(const char* str_);

/*
* @breaf функция подсчитывающая длину строки
* @param str_: строка, длину которой подсчитываем
* @return длина строки
*/
int MyStrlen1(char* str_);
/*
* @breaf функция копирования одной строки в другую
* @param src_: копируемая строка
* @param dest_: строка, в которую копируем
*/
void MyStrcpy(char* src_, char* dest_);

/*
* @breaf функция приписывания одной строки к другой
* @param src_: строка к которой приписываем другую строку
* @param dest_: строка которую приписываем к другой
*/
void MyStrcat(char* dest_, const char* src_);

/*
* @breaf функция сравнивающая две строки
* @param str1: первая строка
* @param str2: вторая строка
*/
void MyStrcmp(const char* str1, const char* str2);

/*
* @breaf функция считывающая одну строку из файла
* @param file_: файл из котрого считываем строку
* @param line_: строка
*/
//void ReadLine(FILE* file_, char* line_); not working