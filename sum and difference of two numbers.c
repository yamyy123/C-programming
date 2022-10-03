#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,sub;
    float c,d,add,minus;
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    scanf("%f%f",&c,&d);
    add=c+d;
    minus=c-d;
    printf("%d %d\n",sum ,sub);
    printf("%.1f %.1f",add,minus);
    
    
    
    return 0;
}
