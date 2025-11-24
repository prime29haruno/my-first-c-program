#include <stdio.h>

int main(void)
{
    double n;

    printf("数値を入力してください。\n");

    scanf("%lf", &n);

    printf("%fが入力されました。\n", n);

    return 0;
}