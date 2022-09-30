#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,flag;
    printf("Enter the positive number: ");
    scanf("%d",&n);
    flag=1;
    if(n==0||n==1)
    flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(1==flag)/*why we are using like this because we engineers somehow the keyboard problem or something if the only
    only one assignment is putted the (flag=1) then the flag value will be turned 1 and it will always print prime so why we are 
    using this method for ==*/
    {
        printf("prime");
    }
    else
    printf("not prime");

    return 0;
}
