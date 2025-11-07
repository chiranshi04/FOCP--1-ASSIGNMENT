#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
    }

    printf("\nWhere do you want to delete?\n");
  
    printf("1. Front\n2. Middle\n3. End\n");
  
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
  

    // Delete from Front
    if(choice == 1)
    {
        for(i = 0; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    // Delete from Middle
    else if(choice == 2) {
        mid = n / 2;
        for(i = mid; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    // Delete from End
    else if(choice == 3)
    {
        n--;  // just reduce size
    }

    else {
        printf("Invalid choice!");
        return 0;
    }

    printf("\nArray after deletion: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
