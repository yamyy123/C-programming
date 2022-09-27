#include<stdio.h>
int main()
{
    int a,b,c,d,max;
    a=10;b=20;c=30;d=40;/*
    a=10,b=20,c=30,d=40;*/ // this is also possible.
    max=a>b&&a>c&&a>d?a:
    b>c&&b>d?b:
    c>d?c:
    d;
    printf("%d",max);
    return 0;
}
