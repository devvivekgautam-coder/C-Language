#include <stdio.h>

int main () {

    double n1, n2, n3;

    printf("Enter The Three Diffrent Numbers :");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3){
        printf("%.2f is The Smaller Number.", n1);
    }

    else if (n2 <= n1 && n1 <=n3) {
        printf("%2.f is The Smaller Number.", n2);
    }
    
    else {
        printf("%2.f is The Smaller Number.", n3);
    }
    
    return 0;
}