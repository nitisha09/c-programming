#include<stdio.h>
void series (int n)
{
    int j,c,t;
  for(j=1;j<=n;j++)
    {
        if(n%j==0)
        c++;
    }
    if(c==2)
        t=n;
    else
        t=2;
    int a[n+1];
    int i;
    a[0]=0;
    a[1]=0;
    //a[2]=2;
    printf("t=%d ",t);
    for(i=2;i<=n;i++)
      {
        a[i]=a[i-1]+t;
        t=0;
      }
    printf("\n%d",a[n]);

}
int main()
{
   int i,t,num;
   scanf("\n%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("\n%d",&num);
    series(num);
       getch();


}}
