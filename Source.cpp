
#include "stdafx.h"
#include "constsnts.h"
#include "FillRand.h"
#include "Print.h"
#include "Ststistics.h"
#include"Shift.h"
#include"Sort.h"
#include"Uniq.h"












void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Array created" << endl;
	//FillRand(arr, n, 100, 110);
	UniqueRand(arr, n);
	Print(arr, n);
	ReversePrint(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	int number_of_shifts = 3;
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	cout << delimiter << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� �������� �������: " << Sum(brr, SIZE) << endl;

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}







