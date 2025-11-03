#include <stdio.h>

int main(void)
{
    int test[5] = {80, 70, 90, 50, 60};
    int i;

    for (i = 0; i < 5; i++){
        printf("%d番目の人の点数は%d点です。\n", i, test[i]);
    }

    return 0;
}