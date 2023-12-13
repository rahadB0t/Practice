#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Array elements : ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}