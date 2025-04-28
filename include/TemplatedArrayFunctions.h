#pragma once
#include"stdafx.h"
#include"conctans.h"
template<typename T>void Print(T arr[], const int n);    //выводит массив на экран
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);     //сортировка массива
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);        //сумма массива
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);     //среднеарифметическое
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Min(T arr[], const int n);
template<typename T>T Min(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Max(T arr[], const int n);
template<typename T>T Max(T arr[ROWS][COLS], const int ROWS, const int COLS);