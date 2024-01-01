#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    k=1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        for(j=1;j<=k;j++)
        {
        printf("%d",k);
    }
    k++;
    printf("
");
}
}