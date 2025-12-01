#include <stdio.h>

int main(void)
{
    char res;

    printf("あなたは満18歳以上ですか？\n");
    printf("YまたはSを入力してください。\n");
    res = getchar();

    if (res == 'Y' || res == 'y') {
        printf("あなたは成年ですね。\n");
    } else if (res == 'N' || res == 'n') {
        printf("あなたは未成年ですね。\n");
    } else {
        printf("YかNを入力してください。\n");
    }

    return 0;
}