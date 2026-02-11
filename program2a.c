// C program to display different data types
#include <stdio.h>
int main() {
    int integer_value = 42;
    short short_integer = 123;
    long long_integer = 1234567890; 
    unsigned int unsigned_integer = 100;
    float float_value = 3.14;
    double double_value = 123.456789;
    long double long_double_value = 1.234567890123456789;
    char character_value = 'A';
    _Bool boolean_value = 1;
    printf("Integer value: %d\n", integer_value);
    printf("Short integer value: %hd\n", short_integer);
    printf("Long integer value: %ld\n", long_integer);
    printf("Unsigned integer value: %u\n", unsigned_integer);

    printf("Float value: %f\n", float_value);
    printf("Double value: %lf\n", double_value);
    printf("Long double value: %Lf\n", long_double_value);

    printf("Character value: %c\n", character_value);

    printf("Boolean value (0=false, 1=true): %d\n", boolean_value);
    return 0;

}
output: Integer value: 42
Short integer value: 123
Long integer value: 1234567890
Unsigned integer value: 100
Float value: 3.140000
Double value: 123.456789
Long double value: 1.234568
Character value: A
Boolean value (0=false, 1=true): 1
