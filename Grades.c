#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    float total, per;
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
      total=p+c+b+m+cs;
   per=total*100/475;
   if (per>=90)
   {
       printf("Grade A");
   }
   else if (per>80 && per<90)
   {
       printf("Grade B");
   }
   else if (per>70 && per<80)
   {
       printf("Grade C");
   }
   else if (per>60 && per<70)
   {
       printf("Grade D");
   }
   else if (per>50 && per<60)
   {
       printf("Grade E");
   }
   else
   {
       printf("Grade F");
   }
}
