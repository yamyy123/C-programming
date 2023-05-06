#include<stdio.h>
int main()
{
  char a[10000];
  scanf("%[^\n]s",a);
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>='a'&&a[i]<='z')
    {
      a[i]=a[i]-' ';
    }
  }
  printf("%s",a);
  return 0;
}
