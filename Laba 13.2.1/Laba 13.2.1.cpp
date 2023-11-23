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
			printf("ўоб визначити максимальне з двох числових вираз≥в\n");
			printf("¬вед≥ть 2 числа: \n");
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
			puts("ўоб визначити м≥н≥мальне з двох числових вираз≥в");
			puts("¬вед≥ть 2 числа: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTZ(b);
			w = MIN(a, b);
			PRINTR(w);
		}
#endif
		puts("ўоб повторити вказан≥ д≥њ, нажм≥ть y \n");
		ch = _getch();
	} while (ch == 'y');
}
