#include <stdio.h>
void prime(int n )
{
int boolean[n-1];
int list[n-1];
int i,j,k,p;
for(i=0;i<n-1;i++)
{
list[i]=i+2;
boolean[i]=1;
}
for(j=0;j<n/2+1;j++)
{
if(boolean[j]==1)
{
p=list[j];
for(k=j+1;k<n-1;k++)
if(list[k]%p==0)
boolean[k]=0;
}}
printf("\nthe prime nos. are\n");
for(i=0;i<n-1;i++)
if(boolean[i]==1)
printf("%d\n",list[i]);
}
int main()
{
   int num;
   printf("enter the number");
   scanf("%d",&num);
   prime(num);
    getch();
}

