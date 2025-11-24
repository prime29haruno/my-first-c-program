#include <stdio.h>

int main(void)
{
    char ch;

    printf("文字（英数字）を入力してください。\n");

    ch = getchar();

    printf("%cが入力されました。\n", ch);

    return 0;
}