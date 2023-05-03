#include<stdio.h>
void Array_multiplication(long long int arr1[], int no_ele)
{
  long long int prev=arr1[0];
  arr1[0]=arr1[0]*arr1[1];
  long long int i;
  for(i=1;i<no_ele-1;i++)
  {
    long long int curr=arr1[i];
    arr1[i]=prev*arr1[i+1];
    prev=curr;
  }
  arr1[no_ele-1]=prev*arr1[no_ele-1];
}
int main()
{
int no_ele,index;
scanf("%d",&no_ele);
long long int arr1[no_ele];
for(index = 0; index < no_ele; index++)
{
scanf("%lld", &arr1[index]);
}
Array_multiplication(arr1, no_ele);
for (int index=0; index<no_ele; index++)
    printf("%lld ", arr1[index]);
return 0;
}
