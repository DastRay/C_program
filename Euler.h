#pragma once

/*
* @breaf Найдите сумму чисел меньше value_, кратных multipies_
* @param value_: число, меньше котрого ищем сумму
* @param multipies_: массив кратных чисел
* @return сумма чисел
*/
unsigned long long Problem_1(const unsigned int value_, const int* multiples_, const unsigned int size_);

/*
* @breaf Найди сумму чётных элементов фибаначи не превышающих число 4000000
* @param value_: число фибаначи, меньше котрого ищем сумму
* @return сумма чисел
*/
unsigned long long Problem_2(const unsigned int value_);

/*
* @breaf найти самый большой делитель числа 600851475143, являющийся простым числом
* @param value_: число, для которого ищем наибольший делитель
* @return наибольший делитель
*/
unsigned long long Problem_3(const unsigned long long value_);

/*
* @breaf нахождение самого большого палиндрома, сделанный из произведения двух 3-х значных чисел
* @return наибольший палиндром
*/
unsigned long long Problem_4();

/*
* @breaf найти наименьшее положительное число является равномерно делимым(без остатка) на все числа от 1 до 20
* @param значение, до которого перебираем делители
* @return искомое наименьшее положительное число
*/
unsigned long long Problem_5(const unsigned int value_);

/*
* @breaf сумма квадратов первых n-чисел
* @param n - количество натуральных чисел
* @return разница между суммой квадратов и квадратом суммы
*/
unsigned long long Problem_6(const unsigned int n_);

/**
 * @brief n - ое простое число
 * @param number номер простого числа
 * @return n - ое простое число 
*/
unsigned long long int Problem_7(const int number);

/**
 * @brief нахождение наибольшего произведения n последовательных цифр в k-значном числе
 * @param nums k-значное число
 * @param count количество последовательных цифр
 * @return наибольшее произведение n последовательных цифр в k-значном числе
*/
unsigned long long int Problem_8(const char* nums, const unsigned int count);

/**
 * @brief Тройка Пифагора - три натуральных числа a < b < c, для которых выполняется равенство a2 + b2 = c2.
 * Существует только одна тройка Пифагора, для которой a + b + c = 1000.
 * @return произведение abc
*/
unsigned int Problem_9();

/**
 * @brief Тройка Пифагора - три натуральных числа a < b < c, для которых выполняется равенство a2 + b2 = c2.
 * Существует только одна тройка Пифагора, для которой a + b + c = 1000.
 * @return произведение abc
*/
unsigned int Problem_9_1();

/**
 * @brief 
 * @param number - число меньше которго ищем сумму простых чисел
 * @return сумму всех простых чисел меньше number
*/
unsigned long long int Problem_10(const unsigned long long int number);

/**
 * @brief Найти наибольшее произведение k подряд идущих чисел в таблице n×m, расположенных в любом направлении (вверх, вниз, вправо, влево или по диагонали)
 * @param nameFile имя файла из котрого считывается таблица
 * @param mode разрешение для открытия файла
 * @param rows количество строк в таблице
 * @param cols количество столбцов в таблице
 * @param count количество чисел идущих подряд (если ввести число отличное от 4 скорее всего будет неверный ответ)
 * @return наибольшее произведение k подряд идущих чисел в таблице n×m, расположенных в любом направлении
*/
unsigned long long int Problem_11(const char* nameFile, const char* mode, const int rows, const int cols, const unsigned int count);

/** 
 * @brief нахождение первого треугольного числа, у которого более n делителей
 * @param num_div количество делителей
 * @return первое треугольное число, у которого более n делителей
 */
unsigned long long int Problem_12(const int num_div);

/**
 * @brief Найдите первые десять цифр суммы следующих ста 50-значных чисел.
*/
void Problem_13();