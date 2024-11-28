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

	double arr[MAX_SIZE];

	for (int i = 0; i < size; i++)
	{

	}


	system("pause");
}