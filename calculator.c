/*
PROJECT: SIMPLE CALCULATOR  THAT TAKES NUMBERS AND OUTPUT THE SUM, DIFFERENCE, PRODUCT  AND QUOTIENT OF THE NUMBERS

AUTHOR: lazarus miumu gualdi
COMPILER: C89
LICENCE:  MIT
DATE:     JULY 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variables declaration
    float num1,num2,sum,difference,product,modulus;

    printf("calculator!\n");
    // input
    printf("Enter two numbers: ");
    scanf("%f%f",&num1,&num2);
    // computation
    // arithmetic operators: + - * / ++ -- %
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    // output
    // 20 + 30 = 50
    printf("%8.2f + %8.2f = %8.2f\n",num1,num2,sum);
    printf("%8.2f - %8.2f = %8.2f\n",num1,num2,difference);
    printf("%8.2f * %8.2f = %8.2f\n",num1,num2,product);
    printf("%8.2f \ %8.2f = %8.2f\n",num1,num2,modulus
);
    return 0;
}
