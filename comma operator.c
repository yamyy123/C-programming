#include<stdio.h>
int main()
{
    int i=20;
    int j = i + (1, 2, 3, 4, 5);
    printf("%d\n", j);
    return 0;
}
