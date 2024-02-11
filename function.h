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

/**
 * @brief Функция для создания двумерного массива с данными типа int
 * @param rows количество строк в массиве
 * @param cols количество столбцов в массиве
 * @return двумерный массив
*/
int** createTwoDimensionalArray(const int rows, const int cols);

/**
 * @brief Функция для печати двумерного массива
 * @param matrix двумерный массив
 * @param rows количество строк в массиве
 * @param cols количество столбцов в массиве
*/
void printMatrix(const int** matrix, const int rows, const int cols);

/**
 * @brief Функция для чтения таблицы/матрицы/двумерного массива из файла
 * @param nameFile имя файла
 * @param mode разрешение для открытия файла
 * @param rows количество строк в таблице/матрице/двумерном массиве
 * @param cols количество столбцов в таблице/матрице/двумерном массиве
 * @return двумерный массив считанный из файла
*/
int** readMatrixFromFile(const char* nameFile, const char* mode, const int rows, const int cols);

/**
 * @brief Функция для поиска в таблице/матрице/двумерном массиве наибольшего произведения четырех подряд идущих чисел, расположенных в любом направлении (вверх, вниз, вправо, влево или по диагонали)
 * @param table таблица/матрица/двумерный массив
 * @param rows количество строк в таблице/матрице/двумерном массиве
 * @param cols количество столбцов в таблице/матрице/двумерном массиве
 * @return наибольшее произведение четырех подряд идущих чисел в таблице 20×20, расположенных в любом направлении (вверх, вниз, вправо, влево или по диагонали)
*/
long long int maxProductInTable(const int** table, const int rows, const int cols);

#endif