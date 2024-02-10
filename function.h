#pragma once
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

int Mult2(int value_);

/*
* @breaf функция проверки числа на простату
* @param x: число, которое проверяется
* @return 1 - если число простое, 0 - иначе
*/
int Prime(unsigned long long int x);

/*
* @breaf функция проверки числа на палнидром
* @param number_: чиcло, которое проверяется
* @return палиндром или нет
*/
bool IsPalindrome(const unsigned int number_);

/**
* @breaf функция проверки числа на простату
* @param num число, которое проверяется
* @return true - если число простое, false - иначе
*/
bool isPrime(int num);

/**
 * @brief функция для подсчёта количества делителей числа
 * @param number число
 * @return количество делителей числа
*/
unsigned int countOfDivisors(const int number);

/**
 * @brief функция для подсчёта количества делителей числа (вторая версия)
 * @param number число
 * @return количество делителей числа
*/
unsigned int countOfDivisors_1(const int number);

/**
 * @brief функция для сложения чисел
 * @param num1 первое число 
 * @param num2 второе число
 * @return сумма двух чисел
*/
char* addStrings(char* num1, char* num2);
#endif