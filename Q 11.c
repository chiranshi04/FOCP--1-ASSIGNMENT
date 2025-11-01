#include <stdio.h>

int main() 
{
  int a[100], even[100], odd[100], n, e=0, o=0;
   printf("Enter size: ");
   scanf("%d", &n);

    printf("Enter numbers: ");
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);

    for(int i=0;i<n;i++) 
    {
        if(a[i]%2==0) even[e++]=a[i];
        else odd[o++]=a[i];
    }

    printf("Even ");
    for(int i=0;i<e;i++)
      printf("%d ",even[i]);

    printf("\nOdd ");
    for(int i=0;i<o;i++)
      printf("%d ",odd[i]);
}
