#include <stdio.h>
#include <string.h>
int main()
{
   /* char a[]="hello";//here we have not initialized the string since it will consider it size upto first null
    int c=strlen(a);//this function will give the length upto the first null
    printf("%d",c);
    int d=sizeof(a);//this kind of sizeof(a) will give us whole size of the string including null
    int e=sizeof(a+2);//since after +2 it has become pointer we gonna have it as size of pointer
    printf("\n%d",d);
    printf("\n%d",e);*/
/*char a[50]="hello";
int c=strlen(a);//
    printf("%d",c);
    int d=sizeof(a);//this kind of sizeof(a) will give us whole size of the string including null
    int e=sizeof(a+2);//since after +2 it has become pointer we gonna have it as size of pointer
    printf("\n%d",d);
    printf("\n%d",e);
    return 0;*/
   /* char *s="hello";
    int c=strlen(s);
    printf("%d",c);
    int d=sizeof(s);//this will give the size of the pointer.
    printf("\n%d",d);*/
  /* int c= strlen("hello");
   int d= sizeof("hello");//this will also gives us the size upto the null.
   printf("%d %d",c,d );*/
  /*  int c= strlen("hello"+2);//this will give the size from the element we mentioned to firs null
   int d= sizeof("hello"+2);//this will also gives us the size upto the null.
   printf("%d %d",c,d );*/
   int c= strlen("hello\0india");//this is giving length upto first null.
   int d= sizeof("hello\0india");//here it gives the total size including first null and second null also.
   printf("%d %d",c,d );
    return 0;
}

