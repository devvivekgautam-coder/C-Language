#include <stdio.h>

int main () {

    float b, h, area;

    printf("Enter The Base Of The Triangle :");
    scanf("%f", &b);

    printf("Enter The Height Of The Triangle :");
    scanf("%f", &h);

    area = 0.5 * b * h;

    printf("The Area Of Triangle Is : %.2f", area);
    return 0;
}