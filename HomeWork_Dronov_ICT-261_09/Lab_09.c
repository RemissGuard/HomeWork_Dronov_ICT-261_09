#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x,y,z,s;
	s = 0;
	char c;
	puts("Введите символ, из которого будет состоять фигура");
	scanf("%c", &c);
	puts("Введите размеры квадратов 1, 2 и 3 (Размер квадрата 2 должен быть меньше квадратов 1 и 3)");
	scanf("%d\n %d\n %d", &x,&y,&z);
	int a = x - y;
	int b = a + z;
	int d = a + z;
	int f = z - y;
	int p = x - a;
	puts("\nВАША ФИГУРА\n");
	for (int i=0;i<a;i++)//верхняя половина квадрата 1
	{
		for (int j = 0; j < x; j++)
		{
			printf("%c ", c);
		}
		putchar('\n');
	}
	for (int i = 0; i < p; i++)//левый нижний угол квадрата 1 и правый верхний угол квадрата 3
	{
		s = 0;
		for (int j = 0; j < d; j++)
		{
			s++;
			if (s >a && s<=x )printf("  ");
			else printf("%c ", c);
		}
		putchar('\n');
	}

	for (int i = 0; i < f; i++)//левый нижний угол квадрата 3
	{
		s = 0;
		for (int j = 0; j < d; j++)
		{
			s++;
			if (s <= a)printf("  ");
			else printf("%c ", c);
		}
		putchar('\n');
	}

}