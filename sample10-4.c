#include <stdio.h>

void buy(int x, int y)
{
    printf("%d万円と%d万円の車を買いました。\n", x, y);
}

int main(void)
{
    int num1, num2;

    printf("1台目はいくらの車を買いますか？\n");
    scanf("%d", &num1);

    printf("2台目はいくらの車を買いますか？\n");
    scanf("%d", &num2);

    buy(num1, num2);

    return 0;
}