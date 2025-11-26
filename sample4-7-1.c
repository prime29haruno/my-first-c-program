#include <stdio.h>

int main(void)
{
    int inum;
    double dnum;

    inum =  160;
    printf("身長は%dセンチです。\n", inum);
    dnum = (double)inum;
    printf("身長は%fセンチです。\n", dnum);

    dnum = 160.5;
    printf("身長は%fセンチです。\n", dnum);
    inum = (int)dnum;
    printf("身長は%dセンチです。\n", inum);

    return 0;
}