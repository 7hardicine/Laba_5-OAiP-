#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define MAX_SIZE 50

void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;

	puts("Введите кол-во элементов массива:");
	while (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE)
	{
		while (getchar() != '\n');
		system("cls");
		puts("Вы ввели что-то не так...\nВведите другое кол-во элементов в массиве:");
	}

	double C;

	puts("Введите значение C:");
	while (scanf("%lf", &C) != 1)
	{
		while (getchar() != '\n');
		system("cls");
		puts("Вы ввели что-то не так...\nПовторите ввод C:");
	}

	double arr[MAX_SIZE], sr_ar = 0, product = 1;
	int k = 0, j = 0;

	for (int i = 0; i < size; i++)
	{
		printf("arr[%2d] = ", i + 1);
		while (scanf("%lf", &arr[i]) != 1)
		{
			while (getchar() != '\n');
			puts("Вы ввели что-то не так...\nВведите элемент массива снова:");
			printf("arr[%2d] = ", i + 1);
		}
		if (arr[i] != C)
		{
			sr_ar += arr[i];
			k++;
		}
		if ((i + 1) % 2 == 0 && arr[i] <= 0)
		{
			product *= arr[i];
			j++;
		}
	}

	if (k == 0)
	{
		puts("В массиве не нашлось чисел, не равных C :(");
	}
	else
	{
		sr_ar /= k;
		printf("Среднее арифметическое чисел, не равных C равно %.1lf\n", sr_ar);
	}

	if (j == 0)
	{
		puts("В массиве не нашлось неположительных чисел, стоящих на четных местах :(");
	}
	else
	{
		printf("Произведение неположительных чисел, стоящих на четных местах равно %.1lf\n", product);
	}

	system("pause");
}