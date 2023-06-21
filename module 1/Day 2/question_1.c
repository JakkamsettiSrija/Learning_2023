/*Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point*/
#include <stdio.h>

void print_exponent_parts(double num) {
    unsigned long long *bytes_repr_ptr = (unsigned long long *)&num;
    unsigned long long bytes_repr = *bytes_repr_ptr;
    unsigned int exponent_bits = (bytes_repr >> 52) & 0x7FF;

    char hex_exponent[10];
    sprintf(hex_exponent, "0x%x", exponent_bits);
    
    char binary_exponent[13];
    sprintf(binary_exponent, "0b%.11u", exponent_bits);
    
    printf("Exponent in hexadecimal format: %s\n", hex_exponent);
    printf("Exponent in binary format: %s\n", binary_exponent);
}

int main() {
    double x = 0.7;
    print_exponent_parts(x);
    
    return 0;
}