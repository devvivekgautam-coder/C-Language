#include <stdio.h>

int main () {

    int b, l, area;

    printf("Enter The Base And Length Of A Rectangle :");
    scanf("%d %d", &b, &l);

    area = l * b;

    printf("The Area Of Rectangale Is : %d", area);
    return 0;
}