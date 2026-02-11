// c program for increment/decrement operator
#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int c = 5;
    int d = 5;
    printf(" Increment Operators\n");
    printf("Original 'a': %d\n", a);
    int  preincrementresult = ++a;
    printf("After pre increment (++a): a = %d, result = %d\n", a, preincrementresult); 
    printf("Original 'b': %d\n", b);
    int postincrementresult = b++;
    printf("After post increment (b++): b = %d, result = %d\n", b, postincrementresult); 
    printf("\n--- Decrement Operators ---\n");
    printf("Original 'c': %d\n", c);
    int predecrementresult = --c;
    printf("After pre decrement (--c): c = %d, result = %d\n", c, predecrementresult);
    printf("Original 'd': %d\n", d);
    int postdecrementresult = d--;
    printf("After post decrement (d--): d = %d, result = %d\n", d, postdecrementresult); 

    return 0;
}
    output:Increment Operators
Original 'a': 5
After pre increment (++a): a = 6, result = 6
Original 'b': 5
After post increment (b++): b = 6, result = 5
Original 'c': 5
After pre decrement (--c): c = 4, result = 4
Original 'd': 5
After post decrement (d--): d = 4, result = 5

