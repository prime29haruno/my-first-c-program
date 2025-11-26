#include <stdio.h>

int main(void)
{
    int num1, num2;
    int sum;

    printf("整数1を入力してください。\n");
    scanf("%d", &num1);

    printf("整数2を入力してください。\n");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("整数1と整数2の足し算の結果は%dです。\n", sum);

    num1 = num1 + 1;
    printf("整数1に1を足すと%dです。\n", num1);

    return 0;
}