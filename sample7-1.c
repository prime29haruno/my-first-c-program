#include <stdio.h>

int main(void)
{
    int test[5];
    int i;

    test[0] = 80;
    test[1] = 70;
    test[2] = 90;
    test[3] = 50;
    test[4] = 60;

    for (i = 0; i < 5; i++){
        printf("%d番目の人の点数は%dです。\n", i, test[i]);
    }

    return 0;
}