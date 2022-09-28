#include <stdio.h>

int main()
{
   int a,b;
   for(a=b=1;a;b=b+1)
   {
       a=b<=3;
       printf("%d%d",a,b);
   }
printf("%d%d",a+10,b+10);
    return 0;
}
