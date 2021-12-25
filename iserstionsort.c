#include<stdio.h>
int main()
{
    int a[100],i,j,n,key;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    printf("\nenter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
       while (a[j]>=0 &&a[j]>key)
       {
        a[j+1]=a[j];
        j=j-1;

       }
        a[j+1]=key;
    }
    printf("ASSENDING ORDER OF GIVEN NO:\n");
    for ( i = 0; i<n; i++)
        {
        printf("%d \t",a[i]);
         }
  return 0;   
}