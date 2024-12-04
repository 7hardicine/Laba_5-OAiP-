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

	int size, max, min;

	puts("Введите кол-во элементов массива, минимальное и максимальное значение элементов:"); 

	/* Вводим количество элементов и область, 
	из который будем на рандом брать числа, проверяем всё */
	while (scanf("%d %d %d", &size, &min, &max) != 3 || size < 1 || size > MAX_SIZE)
	{
		while (getchar() != '\n');
		system("cls");
		puts("Вы ввели что-то не так...\nВведите другое кол-во элементов в массиве:");
	}

	int arr[MAX_SIZE], min_mod = 0, summ = 0;

	/* Заполняем массив случайными числами и параллельно
	ищем первый минимальный по модулю элемент */
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
		printf("arr[%2d] = %d\n", i + 1, arr[i]);
		if (abs(arr[i]) < abs(arr[min_mod]))
		{
			min_mod = i;
		}
	}

	/* От первого минимального элемента и до конца массива
	считаем сумму модулей элементов */
	for (min_mod++; min_mod < size; min_mod++)
	{
		summ += abs(arr[min_mod]);
	}

	printf("Сумма модулей элементов массива после минимального по модулю элемента равна %d\n", summ);

	system("pause");
}