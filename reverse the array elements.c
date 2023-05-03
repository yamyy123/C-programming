#include<stdio.h>
void arr_reverse(int no_ele,long long int arr[])
{
     long long int a=no_ele/2;
     long long int i,j;
     long long int b=1;
     for(i=0,j=no_ele-1;b<=a;i++,j--,b++)
     {
        long long int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
     }
}

int main(){
    int array_size;
    scanf("%d",&array_size);
    
    long long int array[array_size];
    
    for(int index = 0 ; index < array_size ; index++){
        scanf("%lld",&array[index]);
    }
    arr_reverse(array_size,array); 
   for(int index = 0 ; index < array_size ; index++){
        printf("%lld ",array[index]);
    }
    
}
