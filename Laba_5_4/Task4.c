#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define MAX_SIZE 50

void main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	puts("������� ���������� ������� ������ � ���� C:");

	int size;
	double C;

	while (scanf("%d %lf", &size, &C) != 2 || size < 1 || size > MAX_SIZE || C < 1)
	{
		while (getchar() != '\n');
		system("cls");
		puts("�� ����� ���-�� �� ���...\n������� ������ ���-�� ������� ������:");
	}

	double arr_MB[MAX_SIZE], arr_COST[MAX_SIZE];

	puts("������� ������� ����� (� ��) � ��� ���� ����� ������:");

	for (int i = 0; i < size; i++)
	{
		printf("����#%d: ", i + 1);
		while (scanf("%lf %lf", &arr_MB[i], &arr_COST[i]) != 2 || arr_MB[i] < 1 || arr_COST[i] < 1)
		{
			while (getchar() != '\n');
			puts("�� ����� ���-�� �� ���, ��������� ����:");
			printf("����#%d: ", i + 1);
		}
	}

	puts("�����, ������� ������ �������� C:");

	double min = arr_COST[0];

	for (int i = 0; i < size; i++)
	{
		if (arr_COST[i] < min)
		{
			min = arr_COST[i];
		}

		if (arr_COST[i] > C)
		{
			printf("����#%d: %.1lf �� %.1lf ���.\n", i + 1, arr_MB[i], arr_COST[i]);
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr_COST[i] == min)
		{
			printf("����������� �� ���� ������ ����� ���� #%d, ������� ��������� �� %.1lf Mb\n", i + 1, arr_MB[i]);
		}
	}

	system("pause");
}
