// c program for relational operator
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n\n", b);
    
    printf("a == b: %d\n", a == b); 
    printf("a != b: %d\n", a != b); 
    printf("a > b: %d\n", a > b); 
    printf("a < b: %d\n", a < b);  
    printf("a >= b: %d\n", a >= b); 
    printf("a <= b: %d\n", a <= b);
    if (a < b) 
        printf("\n'a' is less than 'b'.\n");
     else 
        printf("\n'a' is not less than 'b'.\n");

    return 0;

}
output:Value of a: 10
Value of b: 20

a == b: 0
a != b: 1
a > b: 0
a < b: 1
a >= b: 0
a <= b: 1

'a' is less than 'b'.
