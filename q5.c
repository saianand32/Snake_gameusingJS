#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p;
    int i;

    p = (char*)malloc(30 * sizeof(char));

    for(i=0;i<5;i++){
        scanf("%s" ,p+6*i);
    }
    for(i=4;i>=0;i--){
        printf("%s" ,p+6*i);
    }
    return 0;



}
