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

	puts("\n������� ������� ����� (� ��) � ��� ���� ����� ������:");

	for (int i = 0; i < size; i++)
	{
		printf("����#%d: ", i + 1);
		while (scanf("%lf %lf", &arr_MB[i], &arr_COST[i]) != 2 || MB < 1 || COST < 1)
		{
			while (getchar() != '\n');
			puts("�� ����� ���-�� �� ���, ��������� ����:");
			printf("����#%d: ", i + 1);
		}
	}

	puts("�����, ������� ������ �������� C:");

	for (int i = 0; i < size; i++)
	{
		if (arr_COST[i] > C)
		{
			printf("����#%d: %lf �� %lf ���.\n", i + 1, arr_MB[i], arr_COST[i]);
		}
	}

	system("pause");
}