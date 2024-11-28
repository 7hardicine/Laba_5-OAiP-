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

	puts("������� ���-�� ��������� �������:");
	while (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE)
	{
		while (getchar() != '\n');
		system("cls");
		puts("�� ����� ���-�� �� ���...\n������� ������ ���-�� ��������� � �������:");
	}

	double C;

	puts("������� �������� C:");
	while (scanf("%lf", &C) != 1)
	{
		while (getchar() != '\n');
		system("cls");
		puts("�� ����� ���-�� �� ���...\n��������� ���� C:");
	}

	double arr[MAX_SIZE], sr_ar = 0, product = 1;
	int k = 0, j = 0;

	for (int i = 0; i < size; i++)
	{
		printf("arr[%2d] = ", i + 1);
		while (scanf("%lf", &arr[i]) != 1)
		{
			while (getchar() != '\n');
			puts("�� ����� ���-�� �� ���...\n������� ������� ������� �����:");
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
		puts("� ������� �� ������� �����, �� ������ C :(");
	}
	else
	{
		sr_ar /= k;
		printf("������� �������������� �����, �� ������ C ����� %.1lf\n", sr_ar);
	}

	if (j == 0)
	{
		puts("� ������� �� ������� ��������������� �����, ������� �� ������ ������ :(");
	}
	else
	{
		printf("������������ ��������������� �����, ������� �� ������ ������ ����� %.1lf\n", product);
	}

	system("pause");
}