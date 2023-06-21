/*Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits*/
#include <stdio.h>

int count_set_bits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int total_set_bits(int arr[], int size) {
    int total_bits = 0;
    for (int i = 0; i < size; i++) {
        total_bits += count_set_bits(arr[i]);
    }
    return total_bits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = total_set_bits(arr, size);
    printf("Total number of set bits: %d\n", result);
    
    return 0;
}