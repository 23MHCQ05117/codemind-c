#include<stdio.h>
int main()
{
    int N,M,X,cost;
    scanf("%d%d%d",&N,&M,&X);
    cost=((N+N)+(M+M))*X;
    printf("%d",cost);
}