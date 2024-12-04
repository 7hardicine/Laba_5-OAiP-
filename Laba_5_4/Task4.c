#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define MAX_SIZE 50

void main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	puts("Введите количество жестких дисков и цену C:");

	int size;
	double C;

	while (scanf("%d %lf", &size, &C) != 2 || size < 1 || size > MAX_SIZE || C < 1)
	{
		while (getchar() != '\n');
		system("cls");
		puts("Вы ввели что-то не так...\nВведите другое кол-во жестких дисков:");
	}

	double arr_MB[MAX_SIZE], arr_COST[MAX_SIZE];

	puts("\nВведите ёмкость диска (в МБ) и его цену через пробел:");

	for (int i = 0; i < size; i++)
	{
		printf("Диск#%d: ", i + 1);
		while (scanf("%lf %lf", &arr_MB[i], &arr_COST[i]) != 2 || MB < 1 || COST < 1)
		{
			while (getchar() != '\n');
			puts("Вы ввели что-то не так, повторите ввод:");
			printf("Диск#%d: ", i + 1);
		}
	}

	puts("Диски, которые дороже значения C:");

	for (int i = 0; i < size; i++)
	{
		if (arr_COST[i] > C)
		{
			printf("Диск#%d: %lf Мб %lf Руб.\n", i + 1, arr_MB[i], arr_COST[i]);
		}
	}

	system("pause");
}