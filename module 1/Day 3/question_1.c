/*Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1*/

#include <stdio.h>
void printNumbersAscending(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printNumbersDescending(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        printNumbersAscending(i);
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printNumbersDescending(i);
        printf("\n");
    }
}

int main() {
    
    int a;
    printf("\n Enter a number:");
    scanf("%d",&a);
    printPattern(a);
    return 0;
}