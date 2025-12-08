#include <stdio.h>

int fact(int n)
{
    if (n == 0) return 1;
    else return n*fact(n-1);
}

int main(void)
{
    int num, ans;

    printf("整数を入力してください。\n");
    scanf("%d", &num);

    ans = fact(num);

    printf("%dの階乗は%dです。\n", num, ans);

    return 0;
}