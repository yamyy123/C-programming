#include <stdio.h>

int main()
{
    int a;
    a=1;
    while(a<=5)
    {
        printf("%d",a);
        if(a==3)
        {
            break;
        }
        a++;
    }

    return 0;
}
