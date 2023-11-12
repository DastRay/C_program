#pragma once
#include <stdbool.h>

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

int Mult2(int value_);

/*
* @breaf функция проверки числа на простату
* @param x: число, которое проверяется
* @return 1 - если функция верна, 0 - если функция неверна
*/
int Prime(unsigned long long int x);

/*
* @breaf функция проверки числа на палнидром
* @param number_: чиcло, которое проверяется
* @return палиндром или нет
*/
bool IsPalindrome(const unsigned int number_);

/*
* @breaf функция подсчитывающая длину строки
* @param str_: строка, длину которой подсчитываем 
* @return длина строки 
*/
unsigned int StrLen(const char* str_);
/*
* @breaf функция копирования одной строки в другую
* @param src_: копируемая строка
* @param dest_: строка, в которую копируем
*/
void СopyStr(char* src_, char* dest_);

/*
* @breaf функция приписывания одной строки к другой
* @param src_: строка к которой приписываем другую строку
* @param dest_: строка которую приписываем к другой
*/
void StrCat(char* dest_, const char* src_);

/*
* @breaf функция сравнивающая две строки
* @param str1: первая строка
* @param str2: вторая строка 
*/
void СompareStr(const char* str1, const char* str2);
#endif