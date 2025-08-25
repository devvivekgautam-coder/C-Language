#include <stdio.h>
#define PI 3.14

int main()
{
    float r, reduis;

    printf("Enter The Reduis Of Cricle :");
    scanf("%f", &r);

    reduis = PI * r * r;

    printf("The Reduis Of Cricle Is : %.2f", reduis);
    return 0;
}
