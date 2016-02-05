#include <stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        int c=0;
        scanf("\n%d",&n);
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
                c++;

        }
        if(c==2)
            printf("\nyes");
        else
            printf("\nno");
    }
    return 0;
}
