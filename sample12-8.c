#include <stdio.h>

int main(void)
{
    int i;
    double num = 3.141592;

    for (i = 1; i <= 10; i++) {
        printf("%5d", i);
    }
    printf("\n");

    printf("円周率は%.2fです。\n", num);
    printf("円周率は%-5.2fです。\n", num);

    return 0;
}