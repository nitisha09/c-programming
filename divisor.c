#include <stdio.h>
int main()
{
int n,i,j,m=1;
scanf("%d\n",&n);
while(n!=0)
{
for( i=2;i<=n;i++)
{
    int c=0;
    for( j=1;j<=i;j++)//for checking prime no.
    {

        if(i%j==0)
            c++;

    }
    if(c==2)
    {
    int d=0;
        while(n%i==0)
        {

            d++;
            n=n/i;
        }
        m=m*(d+1);

    }
}

}
printf("no.of divisor%d\n",m);
return 0;
}
