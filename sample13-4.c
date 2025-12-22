#include <stdio.h>

typedef struct Car {
    int num;
    double gas;
} Car;

void show(Car *pC)
{
    printf("車のナンバーは%d、ガソリン量は%.1fです。\n", pC->num, pC->gas);
}

int main(void)
{
    Car car1;

    printf("ナンバーを入力してください。\n");
    scanf("%d", &car1.num);

    printf("ガソリン量を入力してください。\n");
    scanf("%lf", &car1.gas);

    show(&car1);

    return 0;
}
