#include<stdio.h>
int main()
{
  long long int array_size;
  scanf("%lld",&array_size);
  long long int arr[10000];
  for(int i=0;i<array_size;i++)
  {
    scanf("%lld",&arr[i]);
  }
  long long int new_element;
  scanf("%lld",&new_element);
  long long int pos;
  scanf("%lld",&pos);
  for(int index=array_size;index>=pos;index--)
  {
    arr[index]=arr[index-1];
  }
  array_size+=1;
  arr[pos-1]=new_element;
  for(int index=0;index<array_size;index++)
  {
    printf("%lld ",arr[index]);
  }
  return 0;
}
