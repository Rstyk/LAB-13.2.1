#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include "var.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, max, w;
	char ch = '0';
	do
	{
#if (z > 5)
		{
			printf("��� ��������� ����������� � ���� �������� ������\n");
			printf("������ 2 �����: \n");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTZ(b);
			max = MAX(a, b);
			w = SQR(max);
			PRINTR(w);
		}
#else
		{
			puts("��� ��������� �������� � ���� �������� ������");
			puts("������ 2 �����: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTZ(b);
			w = MIN(a, b);
			PRINTR(w);
		}
#endif
		puts("��� ��������� ������ 䳿, ������ y \n");
		ch = _getch();
	} while (ch == 'y');
}
