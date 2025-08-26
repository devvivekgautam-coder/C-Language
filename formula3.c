#include <stdio.h>

int main () {
    float x, y, ans;

    printf("Enter The Any X Value :");
    scanf("%f", &x);

    printf("Enter The Any Y Value :");
    scanf("%f", &y);

    ans = (x * x * x) + 3 *(x * x) * 3 * x * (y * y) * (y * y * y);

    printf("The Answer Of The Sum Is : %.2f", ans);
    return 0;
}