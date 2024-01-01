#include<stdio.h>
int main()
{
    int i,j,k,n,a=1;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        
        }
        for(j=k-1;j>=1;j--)
        {
        printf("*");
    }
    k--;
        
    printf("
");
    }
}