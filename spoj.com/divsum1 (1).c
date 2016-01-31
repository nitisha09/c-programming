#include <stdio.h>
int main()
{

    int t,i,j,k,s=0;
    scanf("\n%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("\n%d",&a[i]);
        }
        for(j=0;j<t;j++)
        {
            for(k=1;k<a[j];k++)
            {
                if(a[j]%k==0)
                    s=s+k;

            }
            printf("\n%d",s);
            s=0;

        }
        return 0;

}
