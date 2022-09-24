int main()
{
    int a,b;
    int c=0,d=1;
    int e=c+d;
    scanf("%d",&b);
    printf("fibonacci series: %d , %d ,",c,d);
    for(a=3;a<= b;++a)
    {
        printf("%d, ",  e);
        c=d;
        d=e;
        e=c+d;
    }
    return 0;
}
