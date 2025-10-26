#include <stdio.h>

int main() 
{
    int choice;
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int binary, decimal = 0, base = 1, rem;
        printf("Enter binary number: ");
        scanf("%d", &binary);
        while (binary > 0)
          {
            rem = binary % 10;
            decimal = decimal + rem * base;
            base = base * 2;
            binary = binary / 10;
        }
        printf("Decimal = %d", decimal);
    }
    else if (choice == 2) 
    {
        int decimal, binary = 0, base = 1, rem;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        while (decimal > 0)
          {
            rem = decimal % 2;
            binary = binary + rem * base;
            base = base * 10;
            decimal = decimal / 2;
        }
        printf("Binary = %d", binary);
    }
    else 
    {
        printf("Invalid choice");
    }

    return 0;
}
