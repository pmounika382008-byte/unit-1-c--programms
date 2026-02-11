//  C Program- Calculator using switch case:
#include <stdio.h>

int main() {
 double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0.0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Division by zero error!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;

}
output:Enter first number: 12
Enter second number: 8
Enter the operator (+, -, *, /): +
12.00 + 8.00 = 20.00
