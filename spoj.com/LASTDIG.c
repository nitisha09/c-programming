#include <stdio.h>
#include <math.h>
int main()
{
  int t,i,a,d;
  long int b,c;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
           scanf("%d",&a);
                         scanf("%d",&b);
          if(a!=0&&b!=0)
          {
              c=pow(a,b);
              d=c%10;
              printf("%d",d);
          }

      }

  return 0;

}
