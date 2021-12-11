#include<stdio.h>
#include<stdlib.h>

int main()
{  float a[5]={1.0,2.0,3.0,4.0,5.0};

 int i;
 float sum=0.0;

 for(i=0;i<5;i++){
     
     sum+=*(a+i);
 }

 printf("%f" ,sum/5);

    return 0;
}