Question 1.c
#include <stdio.h>

int main()
  {
    int num, originalNum, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
      {
        remainder = originalNum % 10;
        result = result + (remainder * remainder * remainder);   // cube of each digit
        originalNum = originalNum / 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
