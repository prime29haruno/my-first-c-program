#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int num1 = 1;
    int num2 = 2;
    
    printf("変数num1の値は%dです。\n", num1);
    printf("変数num2の値は%dです。\n", num2);
    printf("変数num1とnum2の値を好感します。\n");

    swap(&num1, &num2);

    printf("変数num1の値は%dです。\n", num1);
    printf("変数num2の値は%dです。\n", num2);

    return 0;
}