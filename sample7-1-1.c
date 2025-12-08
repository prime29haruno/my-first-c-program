#include <stdio.h>

int main(void)
{

    int test[5];
    int i;
    
    printf("5人の点数を入力してください。\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &test[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%d番目の人の点数は%dです。\n", i, test[i]);
    }

    return 0;
}