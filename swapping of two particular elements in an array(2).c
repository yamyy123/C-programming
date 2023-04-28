#include<stdio.h>

int main(){
    long long int a;
    scanf("%lld",&a);
    long long int b[a];
    long long int c, d,temp;
    
    for(long long int i=0;i<a;i++)
    {
        scanf("%lld",&b[i]);
    }
    
    scanf("%lld %lld",&c,&d);
    
    if(c>=a || d>=a)
    {
        printf("Invalid");
    }
    else
    {
    temp = b[c];
    b[c] = b[d];
    b[d] = temp;
    
    for(long long int i=0;i<a;i++)
    {
        printf("%lld ",b[i]);
    }
    }
  return 0;
    }
