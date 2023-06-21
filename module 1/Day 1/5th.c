/*Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);*/
    #include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1: // Set 1st bit
            num |= 1; // OR operation with 000...0001 to set the 1st bit
            break;
        case 2: // Clear 31st bit
            num &= ~(1 << 31); // AND operation with 011...111 to clear the 31st bit
            break;
        case 3: // Toggle 16th bit
            num ^= (1 << 16); // XOR operation with 000...0001 shifted by 16 positions to toggle the 16th bit
            break;
        default:
            printf("Invalid operation type\n");
            return -1; // Return -1 to indicate an error
    }

    return num; // Return the modified number
}

int main() {
    int num, oper_type;
    int result;

    // Read input
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    // Perform bit operations
    result = bit_operations(num, oper_type);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}