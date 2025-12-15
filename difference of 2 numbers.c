#include <stdio.h>
int main() {
    int a, b, avg;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    avg = (a+b)/2;
    printf("average = %d", avg);
    return 0;
}

