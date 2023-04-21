#include <stdio.h>
#include <string.h>
//this is the actual representation of the strcmp function.
int strcomp(char *t,char *s)
{
    while(*t && *t==*s)//*t is given as a condition because if both of the string equals it will go to gv and gv compare
    //then we would get error because we will get the wrong answer.
    {
        t++;
        s++;
    }
    return *t-*s;//if the string not matches it will give the difference and if it matches it will give 0.
}

int main()
{
    char s1[10]="hello";
    char s2[10]="hell";
    int c=strcomp(s1,s2);
    printf("%d",c);
    return 0;
}
