#include <stdio.h>

int main(void)
{
    int i, res;

    printf("何回目でループを中止しますか？\n");
    scanf("%d", &res);

    for (i = 1; i <= 10; i++) {
        if (i == res) continue;
        printf("%d回目の処理です。\n", i);
    }

    return 0;
}