#include <stdio.h>
int main()
{

    int t,i,k,s=0,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        for(k=1;k<a;k++)
            {
                if(a%k==0)
                    s=s+k;

            }

           printf("\n%d",s);
            s=0;

        }
        return 0;

}
