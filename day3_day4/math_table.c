#include <stdio.h>

void printMathTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %2d = %3d \n", num, i, num * i);
    }
}