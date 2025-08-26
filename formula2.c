#include <stdio.h>

int main () {
    float x, y, ans;

    printf("Enter The Any X Value :");
    scanf("%f", &x);

    printf("Enter The Any Y Value :");
    scanf("%f", &y);

    ans = x * x - 2 * x * y - y * y;

    printf("The Answer Of The Sum Is : %.2f", ans);
    return 0;
}