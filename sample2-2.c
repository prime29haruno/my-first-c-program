#include <stdio.h>

int main(void)
{
    printf("%cは文字です。\n", 'A');
    printf("%dは整数です。\n", 123);
    printf("%fは小数です。\n", 10.5);
    printf("%cは文字、%dは整数です。\n", 'A', 123);

    return 0;
}