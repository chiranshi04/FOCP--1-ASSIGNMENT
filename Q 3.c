#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

//  Using bitwise NOT (~) and addition to perform subtraction

int result = a + (~b + 1); // same as a - b

    printf("Subtraction result = %d\n", result);

    return 0;
}
  
