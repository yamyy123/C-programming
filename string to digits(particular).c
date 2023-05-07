#include<stdio.h>
int main()
{
  char a[10000];
  scanf("%[^\n]s",a);
  int flag=0;
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>='0'&&a[i]<='9')
    {
      printf("%c",a[i]);
      flag=1;
    }
  }
  if(flag==0)
  {
    printf("0");
  }
  return 0;
}
