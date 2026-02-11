// Program to calculate the sum of first n natural numbers- while loop
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i; 
        i++;           
    }
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
output:Enter a positive integer: 5
Sum of the first 5 natural numbers is: 15
