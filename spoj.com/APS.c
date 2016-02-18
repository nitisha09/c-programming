#include<stdio.h>
void series(int n)
{
    int a[n+1];
    a[0]=0;
    a[1]=0;
    int i,j,c=0,t=0;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
         {
            if(i%j==0)
            c++;
         }
        if(c==2)
            t=i;
        else
            t=2;

        a[i]=a[i-1]+t;
        t=0;
        c=0;

    }
     printf("%d",a[n]);
}
int main()
{
   int i,t,num;
   scanf("\n%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%d",&num);
    series(num);
       getch();


    }
}
