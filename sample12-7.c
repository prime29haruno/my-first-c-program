#include <stdio.h>

double avg(int t[], int n)
{
    int i;
    double sum = 0.0;

    for (i = 0; i < n; i++) {
        sum += t[i];
    }

    return sum / n;
}

int main(void)
{
    int test[5];
    int i;
    double ans;

    printf("5人のテストの点数を入力してください。\n");
    fflush(stdout);
    for (i = 0; i < 5; i++) {
        scanf("%d", &test[i]);
    }

    ans = avg(test, 5);

    printf("5人の平均点は%fです。\n", ans);

    return 0;
}