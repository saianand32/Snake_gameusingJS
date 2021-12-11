#include<stdio.h>
#include<stdlib.h>

void swap(int* ,int*);
int main()
{
   int a=4;
   int b=5;

   swap(&a,&b);

   printf("%d %d",a,b);


}

void swap(int*m,int*n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}




