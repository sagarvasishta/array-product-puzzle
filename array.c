#include <stdio.h>
int main()
{
    int n,a[10],b[10],i,prod=1;
    printf("enter size");
    scanf("%d",&n);
    printf("enter array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        prod=prod*a[i];
    }
    printf("sum = %d ",prod);
    for(int j=0;j<n;j++)
    {
        b[j]=prod/a[j];
    }
    printf("new array");
    for(int j=0;j<n;j++)
        printf("%d ",b[j]);
}
