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

	int size_A, size_B, i = 0; 

	puts("Введите кол-во элементов массива A и B:");
	while (scanf("%d %d", &size_A, &size_B) != 2 || size_A < 1 || size_A > MAX_SIZE || size_B < 1 || size_B > MAX_SIZE) // Вводим размерности двух массивов и проверяем их
	{
		while (getchar() != '\n');
		system("cls");
		puts("Вы ввели что-то не так...\nВведите другое кол-во элементов в массивах:");
	}

	double arr_A[MAX_SIZE], arr_B[MAX_SIZE]; // Объявляем эти два массива

	puts("\nВведите элементы массива A:");
	for (i; i < size_A; i++)
	{
		printf("arr_A[%2d] = ", i + 1);
		while (scanf("%lf", &arr_A[i]) != 1) // Заполняем массив A и проверяем его
		{
			while (getchar() != '\n');
			puts("Вы ввели что-то не так...\nВведите элемент массива снова:");
			printf("arr_A[%2d] = ", i + 1);
		}
	}

	int min = 0; // Объявляем вспомогательную переменную и присваиваем ей номер самого первого элемента массива

	puts("\nВведите элементы массива B:");
	for (i = 0; i < size_B; i++)
	{
		printf("arr_B[%2d] = ", i + 1);
		while (scanf("%lf", &arr_B[i]) != 1) // Заполняем массив B и проверяем его
		{
			while (getchar() != '\n');
			puts("Вы ввели что-то не так...\nВведите элемент массива снова:");
			printf("arr_B[%2d] = ", i + 1);
		}
		if (arr_B[min] > arr_B[i]) // Параллельно ищем самый ЛЕВЫЙ МИНИМАЛЬНЫЙ элемент
		{
			min = i;
		}
	}

	double arr_C[MAX_SIZE]; // Объявляем массив C
	i = 0;

	puts("\nМассив C будет иметь вид:");

	for (int j = 3; j <= size_A; j += 4, i++) // Выбираем из массива A значения элементов, у которых номера кратны 4, и присваиваем их массиву C
	{
		arr_C[i] = arr_A[j];
		printf("arr_C[%2d] = %.1lf\n", i + 1, arr_C[i]);
	}

	for (int j = 0; j < min; j++, i++) // Добавляем к массиву C значения элементов, которые стоят слева от самого левого минимального значения из массива B
	{
		arr_C[i] = arr_B[j];
		printf("arr_C[%2d] = %.1lf\n", i + 1, arr_C[i]);
	}

	system("pause");
}