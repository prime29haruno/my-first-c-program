#include <stdio.h>

#define NUM 5

int main(void)
{
    int test[NUM];
    int tmp;
    int s, t;

    printf("%d人の点数を入力してください。\n", NUM);
    for (s = 0; s < NUM; s++) {
        scanf("%d", &test[s]);
    }

    for (s = 0; s < NUM - 1; s++) {
        for (t = s + 1; t < NUM; t++) {
            if (test[t] < test[s]) {
                tmp = test[t];
                test[t] = test[s];
                test[s] = tmp;
            }
        }
    }

    for (s = 0; s < NUM; s++) {
        printf("%d位の人の点数は%dです。\n", NUM - s, test[s]);
    }

    return 0;
}