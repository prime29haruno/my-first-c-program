#include <stdio.h>

int main(void)
{
    int d = 2;
    double pi = 3.14;

    int num1 = 5, num2 = 4;
    double div;

    printf("直径が%dセンチの\n", d);
    printf("円周は%fセンチです。\n", d * pi);

    div = num1 / num2;
    printf("%d/%dは%fです。\n", num1, num2, div);

    return 0;
}