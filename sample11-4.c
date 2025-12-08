#include <stdio.h>
#include <math.h>

int main(void){
    double num1, num2, ans1, ans2, ans3;

    printf("1番目の小数を入力してください。\n");
    scanf("%lf", &num1);

    printf("2番目の小数を入力してください。\n");
    scanf("%lf", &num2);

    ans1 = exp(num1);
    ans2 = fabs(num2);
    ans3 = pow(num1, num2);

    printf("exp(%f)は%fです。\n", num1, ans1);
    printf("%fの絶対値は%fです。\n", num2, ans2);
    printf("%fの%f乗は%fです。\n", num1, num2, ans3);

    return 0;
}