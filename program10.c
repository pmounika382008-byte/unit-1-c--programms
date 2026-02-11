//C Program to print multiplication Table
#include <stdio.h>

int main() {
    int num; 
    int i;
    
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;

}
output:Multiplication Table for 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
