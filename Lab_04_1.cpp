﻿// Lab_04_1.cpp
// Прізвище та ім'я автора
// Лабораторна робота №4.1
// Цикли.
// Варіант 4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, i;
	double S;

	cout << "N = "; cin >> N;

	S = 0;
	i = 1;
	while (i <= N)
	{
		S += (1 + i / N) / pow(i, 2);
		i++;
	}
	cout << S << endl;

	S = 0;
	i = 1;
	do {
		S += (1 + i / N) / pow(i, 2);
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (1 + i / N) / pow(i, 2);
	}
	cout << S << endl;

	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += (1 + i / N) / pow(i, 2);
	}
	cout << S << endl;

	return 0;
}