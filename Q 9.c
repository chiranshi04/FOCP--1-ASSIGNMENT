#include <stdio.h>

int main()
{
    int n, i, marks[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    for(i = 0; i < n; i++)
      {
        if(marks[i] == 99) 
        {       
          
          printf("First occurrence of 99 is at position %d\n", i + 1);
            return 0;
          
        }
    }

    printf("99 not found in the list.\n");
    return 0;
}
