#include <stdio.h>

int main () {


    int age;

    printf("Enter Your Birth Year :");
    scanf("%d", &age);

    age = 2025 - age;

    printf("Your Age is : %d", age);
    return 0;
}