#include <stdio.h>

int main(void)
{
    int a, b;

    a = 0;
    b = a++;
    printf("aの値は%dです。bの値は%dです。\n", a, b);

    a = 0;
    b = ++a;
    printf("aの値は%dです。bの値は%dです。\n", a, b);

    return 0;
}