#include <stdio.h>

int main(void)
{
    int i;

    i = 1;

    do {
        printf("繰り返しています。\n");
        i++;
    } while (i <= 5);

    printf("繰り返しが終わりました。\n");

    return 0;
}