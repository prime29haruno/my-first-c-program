#include <stdio.h>

int main(void)
{
    char str[100];

    printf("文字列を入力してください。\n");

    fgets(str, sizeof(str), stdin);

    printf("入力した文字列は%sです。\n", str);

    return 0;

}