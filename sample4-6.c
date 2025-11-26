#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 0;

    printf("char型のサイズは%luバイトです。\n", sizeof(char));
    printf("short int型のサイズは%luバイトです。\n", sizeof(short int));
    printf("int型のサイズは%luバイトです。\n", sizeof(int));
    printf("long int型のサイズは%luバイトです。\n", sizeof(long int));
    printf("float型のサイズは%luバイトです。\n", sizeof(float));
    printf("double型のサイズは%luバイトです。\n", sizeof(double));
    printf("long double型のサイズは%luバイトです。\n", sizeof(long double));

    printf("変数aのサイズは%luバイトです。\n", sizeof(a));
    printf("式a+bのサイズは%luバイトです。\n", sizeof(a+b));

    return 0;
}