#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднеарифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << Min(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << Max(arr, n) << endl;

	cout << delimiter << endl;

	const int SIZE = 8;
	int brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднеарифметическое: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << Min(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << Max(brr, SIZE) << endl;
	Print(brr, SIZE);
	int shifts;
	//cout << "Введите количество сдигов: "; cin >> shifts;
	//ShiftLeft(brr, SIZE, shifts);
	//Print(brr, SIZE);

	//cout << "Введите количество сдвигов: "; cin >> shifts;
	//ShiftRight(brr, SIZE, shifts);



	cout << delimiter2 << endl;


	int i_arr_2[ROWS][COLS] =              //объявление двумерного массива
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};


	FillRand(i_arr_2, ROWS, COLS);

	cout << "Сумма двумер массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднеарифметическое: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение двумер массива: " << Min(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение двумер массива" << Max(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, shifts);
	Print(i_arr_2, ROWS, COLS);
}

