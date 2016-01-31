#include<stdio.h>
int main()
{
   int c,t,i,j,f=1,k;
scanf("%d",&t);
if(1<=t<=100)
   {

   int a[t];
   for(i=0;i<t;i++)
   {

       scanf("%d",&a[i]);


   }

   for(j=0;j<t;j++)
   {
       for(k=1;k<=a[j];k++)
       {

           f=f*k;
       }
       printf("\n%d",f);
       f=1;
   }}
   return 0;
}
