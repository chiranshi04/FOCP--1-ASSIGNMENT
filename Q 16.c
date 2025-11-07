#include <stdio.h>

int main() 
{
    int arr[100], n, i, num, choice, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number to insert: ");
    scanf("%d", &num);

    printf("Where do you want to insert?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Insert at Front
    if(choice == 1)
    {
        for(i = n; i > 0; i--)
          {
            arr[i] = arr[i - 1];
        }
        arr[0] = num;
        n++;
    }

    // Insert at Middle
    else if(choice == 2) {
        mid = n / 2;
        for(i = n; i > mid; i--) {
            arr[i] = arr[i - 1];
        }
        arr[mid] = num;
        n++;
    }

    // Insert at End
    else if(choice == 3) 
    {
        arr[n] = num;
        n++;
    }

    else {
        printf("Invalid choice!");
        return 0;
    }

    printf("\nArray after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
