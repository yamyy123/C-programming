#include<stdio.h>
int main()
{
  long long int arr_size;
  long long int arr_ele[10000];
  long long int pos,index;
  scanf("%lld",&arr_size);
  for(index=0;index<arr_size;index++)
  {
    scanf("%lld",&arr_ele[index]);
  }
  scanf("%lld",&pos);
  if(pos>=arr_size+1)
  {
    printf("Deletion not possible");
  }
  else
  {
    for(index=pos-1;index<arr_size-1;index++)
    {
      arr_ele[index]=arr_ele[index+1];
    }
    for(index=0;index<arr_size-1;index++)
    printf("%lld ",arr_ele[index]);
  }
  return 0;
}
