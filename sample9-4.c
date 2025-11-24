#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20];
    char str2[10];

    strcpy(str1, "Hello");
    printf("str1は%sです。\n", str1);

    printf("str1の長さは%dです。\n", strlen(str1));

    strcpy(str2, "Goodbye");
    printf("str2は%sです。\n", str2);

    printf("str2の長さは%dです。\n", strlen(str2));

    strcat(str1, str2);
    printf("str1とstr2を連結すると%sです。\n", str1);

    return 0;
}