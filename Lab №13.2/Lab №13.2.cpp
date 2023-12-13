#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "math_operations.h"
#include <corecrt_math.h>


void main()
{
    printf("Lab 13.2. Using macros and preprocessing directive\n");
    int x, y, z, esquerSum, x_cube, maxim, minim;
    char ch;


    {
        printf("Define the maximum of two numbers\n");
        printf("Input 3 integer numbers\n");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        scanf("%d", &z);
        PRINTI(z);
        if (z > 10)
        {
            esquerSum = ESQUER(x, z);
            PRINTI(esquerSum);
            x_cube = CUBE(x);
            PRINTI(x_cube);
            maxim = MAX(esquerSum, x_cube);
            PRINTR(maxim);
        }
        if (z <= 10)
        {
            int first = x - z;
            int abs1 = ABS(first);
            int second = x + z;
            int abs2 = ABS(second);
            minim = MIN(first, second);
            PRINTR(minim);

        }
        printf("Repeat?  y / n ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

}