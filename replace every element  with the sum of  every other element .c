#include<stdio.h>
void replace_ele(int no_ele,long long int arr[])
{ 
   long long int sum=0;
   long long int index;
   long long int temp;
   for(index=0;index<no_ele;index++)
   {
     sum+=arr[index];
   }
   for(index=0;index<no_ele;index++)
   {
     temp=sum-arr[index];
     arr[index]=temp;
     printf("%lld ",temp);
   }
}
int main()
{
int no_ele,index;
scanf("%d",&no_ele);
long long int arr[no_ele];
for(index=0;index<no_ele;index++)
scanf("%lld",&arr[index]);
replace_ele(no_ele,arr);
return 0;
}
