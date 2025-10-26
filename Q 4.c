#include <stdio.h>

int main() {
    int a, b, temp, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose swapping method:\n");
    printf("1. Using temporary variable\n");
    printf("2. Using arithmetic (+, -)\n");
    printf("3. Using bitwise XOR (^)\n");
    printf("4. Using pointers\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
// Using switch case
    switch (choice) {
        case 1: // Temporary variable
            temp = a;
            a = b;
            b = temp;
            break;

        case 2: // Arithmetic
            a = a + b;
            b = a - b;
            a = a - b;
            break;

        case 3: // XOR
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
            break;

        case 4: { // Pointer
            int *p1 = &a, *p2 = &b;
            temp = *p1;
            *p1 = *p2;
            *p2 = temp;
            break;
        }

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
