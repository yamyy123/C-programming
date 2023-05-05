#include<stdio.h>
int main()
{
  long long int size,count=0;
  scanf("%lld",&size);
  long long int arr[size];
   int flag[10000]={0};
  for(int i=0;i<size;i++)
  {
    scanf("%lld",&arr[i]);
  }
  for(int i=0;i<size;i++)
  {
    if(flag[i]==0)
    {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
       flag[j]=flag[i]=1;
      }
    }
  }
  }
  for(int i=0;i<size;i++)
  {
    if(flag[i]==0)
    {
      printf("%lld ",arr[i]);
      count++;
    }
  }
  if(count==0)
  {
    printf("No unique elements in the array");
  }
  return 0;
}
