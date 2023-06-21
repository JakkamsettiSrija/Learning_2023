/*Write a program to swap any type of data passed to an function.*/
#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int a = 10;
    int b = 20;
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    swap(&a, &b, sizeof(int));
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    double x = 3.14;
    double y = 2.71;
    
    printf("Before swapping: x = %lf, y = %lf\n", x, y);
    
    swap(&x, &y, sizeof(double));
    
    printf("After swapping: x = %lf, y = %lf\n", x, y);
    
    return 0;
}