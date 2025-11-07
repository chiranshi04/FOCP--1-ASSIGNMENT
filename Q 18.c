#include <stdio.h>

int main()
{
    int arr[100], n, i, j, count, hasDuplicate = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements are: ");

    for(i = 0; i < n; i++)
      {
        count = 1;
        for(j = i + 1; j < n; j++)
          {
            if(arr[i] == arr[j] && arr[i] != -1) 
            {
                count++;
                arr[j] = -1; // mark duplicate as visited
            }
        }

        if(count > 1 && arr[i] != -1)
        {
            printf("%d ", arr[i]);
            hasDuplicate = 1;
        }
    }

    if(!hasDuplicate) 
    {
        printf(" (No duplicates found)");
    }

    return 0;
}
