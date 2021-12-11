#include<stdio.h>
#include<stdlib.h>
int main()
{   int n;
//     printf("enter n\n");
// scanf("%d" ,&n);
    char *p;
    int i;

    p = (char*)malloc(5 * sizeof(char));

    for(i=0;i<5;i++){
        scanf("%c" ,p+i); 
    }
    

     if (*p >= 'a' && *p <= 'z') // lower case Check
        {*p =*p - ('a' - 'A');}

    
     for(i=0;i<5;i++){
        printf("%c" ,*(p+i));
    }

 
    return 0;

}