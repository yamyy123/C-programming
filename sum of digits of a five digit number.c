#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,p;
    scanf("%d", &n);
    p=0;
   for(;n!=0;)
    {
    p=p+n%10;/*this statement makes the adding up of 
    last digit of the five digit then four then three then two then one*/
    n=n/10;/*this statement makes the n value to decreased to tenthousand's to thosands then hunderds then tens and ones*/
    }
    printf("%d",p);//here at last all the values are added and then printed.
    return 0;
}
