#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x, y, a;
	char c;
	puts("Введите символ, из которого будет состоять фигура");
	scanf("%c",&c);
	puts("Введите длину катета равностороннего прямоугольного перевернутого треугольника");
	scanf("%d",&a);
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < i; j++) putchar(' ');
        int b = 2 * (a - i) - 1;
        for (int j = 0; j < b; j++) 
        {
            if (i == 0 || j == 0 || j == b - 1) printf("%c",c);
            else putchar(' ');
        }
        putchar('\n');
    }
}
