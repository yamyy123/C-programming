#include<stdio.h>
int main()
{
  long long int ele_1,ele_2,ele_3;
  scanf("%lld %lld %lld",&ele_1,&ele_2,&ele_3);
  long long int itr;
  long long int ans[10000];
  long long int count=0;
  long long int arr1[ele_1],arr2[ele_2],arr3[ele_3];
  for(itr=0;itr<ele_1;itr++)
  {
    scanf("%lld",&arr1[itr]);
  }
  for(itr=0;itr<ele_2;itr++)
  {
    scanf("%lld",&arr2[itr]);
  }
  for(itr=0;itr<ele_3;itr++)
  {
    scanf("%lld",&arr3[itr]);
  }
  long long int i=0,j=0,k=0;
  while(i<ele_1&&j<ele_2&&k<ele_3)
  {
    if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
    {
      ans[count++]=arr1[i];
      i++;
      j++;
      k++;
    }
    else if(arr1[i]<arr2[j])
    i++;
    else if(arr2[j]<arr3[k])
    j++;
    else if(arr3[k]<arr2[j]&&arr3[k]<arr1[i])
    k++;
  }
  for(i=0;i<count;i++)
  {
    printf("%lld ",ans[i]);
  }
  return 0;
}
