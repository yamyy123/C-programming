#include <stdio.h>
#include <string.h>
//to split the string based on a certain instructions
int main()
{
    char s[10000];
    scanf("%[^\n]s",s);
    char *p=strtok(s," ");
    while(p!=NULL)
    {
        printf("%s\n",p);
        p=strtok(NULL," ");
    }
    return 0;
}
// C/C++ program for splitting a string
// using strtok()
