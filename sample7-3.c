#include <stdio.h>

#define NUM 5

int main(void)
{
    int test[NUM];
    int i;

    printf("%d人の人数を入力してください。\n", NUM);

    for (i = 0; i < NUM; i++){
        scanf("%d", &test[i]);
    }

    for (i = 0; i < NUM; i++){
        printf("%d番目の人の点数は%d点です。\n", i + 1, test[i]);
    }
    
    return 0;
}