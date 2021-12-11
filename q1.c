#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum=0;
    int n,i;
    int *p;

    printf("enter n\n" );
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));

    if(p!= NULL)
    {
        printf("enter numbers\n");

        for(i=0;i<n;i++)
        {
            scanf("%d" ,p+i);
        }

        for(i=0;i<n;i++)
        {
           sum=sum+ *(p+i);
        }
        
        printf("%d", sum);

        free(p);
        p=NULL;
    }
    else{
        printf("error");
    }


}