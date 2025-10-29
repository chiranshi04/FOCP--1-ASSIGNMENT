#include <stdio.h>

int main()
{
    int n, i, a[50], count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Students who scored 99 are at positions: ");
    for(i = 0; i < n; i++)
{
        if(a[i] == 99)
      {
   printf("%d ", i + 1);
   count++;
        }
   }

    if(count == 0)
        printf("\nNo student scored 99");
    else
        printf("\nTotal students who scored 99 = %d", count);

    return 0;
}
