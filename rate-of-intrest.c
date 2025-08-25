#include <stdio.h>

int main () {

    float p, r, n, intrest;
    
    printf("Enter The P R N :");
    scanf("%f %f %f", &p, &r, &n);

    intrest = p * r * n / 100;

    printf("This is the Rate Of Intrest : %.2f", intrest);
    return 0;
}