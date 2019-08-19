#include <stdio.h>
int main()
{
    int n,a[10],b[10],i,sum=1;
    printf("enter size");
    scanf("%d",&n);
    printf("enter array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum*a[i];
    }
    printf("sum = %d ",sum);
    for(int j=0;j<n;j++)
    {
        b[j]=sum/a[j];
    }
    printf("new array");
    for(int j=0;j<n;j++)
        printf("%d ",b[j]);
}
