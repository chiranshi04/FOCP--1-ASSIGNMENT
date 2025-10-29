#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
{
         // Left pyramid
  for(j = 1; j <= i; j++)
{
 if((i + j) % 2 == 0)
   printf("0");
   else
 printf("1");
   }
  // Spaces between left and right pyramid
 for(k = 1; k <= 2 * (n - i); k++)
{
 printf(" ");
  }

 // Right pyramid
 for(j = 1; j <= i; j++)
   {
  if( (i + j) % 2 == 0)
  printf("0");
     else
  printf("1");
        }

  printf("\n");
}

  return 0;
}
