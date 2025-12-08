#include <stdio.h>

#define SUB 2
#define NUM 5

int main(void)
{
    int test[SUB][NUM] = {{90, 55, 22, 50, 75}, {60, 22, 68, 72, 58}};
    int i;

    for (i = 0; i < NUM; i++) {
        printf("%d番目の人の国語の点数は%dです。\n", i + 1, test[0][i]);
        printf("%d番目の人の数学の点数は%dです。\n", i + 1, test[1][i]);
    }

    return 0;
}