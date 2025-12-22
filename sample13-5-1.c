#include <stdio.h>

typedef struct Car {
    int num;
    double gas;
} Car;

int main(void)
{
    Car cars[3] = {{1234, 25.5}, {4567, 52.2}, {7890, 20.5}};
    int i;

    for (i = 0; i < 3; i++) {
        printf("car%dの車のナンバーは%d, ガソリン量は%.1fです。\n", i, cars[i].num, cars[i].gas);

    }

    return 0;
}