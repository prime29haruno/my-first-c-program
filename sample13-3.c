#include <stdio.h>

typedef struct Car {
    int num;
    double gas;
    struct Car *next;
} Car;

int main(void)
{
    Car car0, car1, car2;
    Car *pC;

    car0.num = 1234; car0.gas = 25.5;
    car1.num = 4567; car1.gas = 52.2;
    car2.num = 7890; car2.gas = 20.5;

    car0.next = &car1;
    car1.next = &car2;
    car2.next = NULL;

    for (pC = &car0; pC != NULL; pC = pC->next) {
        printf("車のナンバーは%d、ガソリン量は%.1fです。\n", pC->num, pC->gas);
    }

    return 0;
}

