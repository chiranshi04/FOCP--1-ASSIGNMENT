#include <stdio.h>

int main()

{  
    
    int a[100],n;
    printf("Enter size: ");
    scanf("%d", &n);
  
  printf("Enter numbers: ");
  for(int i=0; i<n; i++) 
   scanf("%d", &a[i]);

    for(int i=0; i<n; i++)
      {
        if((i==0 || a[i]>=a[i-1]) && (i==n-1 || a[i]>=a[i+1])) 
        {
            printf("Peak element: %d\n", a[i]);
            break;
        }
    }
    return 0;
}
