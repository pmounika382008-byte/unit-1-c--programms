// C Program to Perform Arithmetic Operation
#include <stdio.h> 

int main() {
    int num1, num2, sum; 

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;

}
output:Enter the first number: 10
Enter the second number: 20
    The sum of 10 and 20 is: 30
