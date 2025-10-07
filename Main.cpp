// You are using GCC
#include<stdio.h>
int main()
{
    int count,i,j;
    scanf("%d",&count);
    for(i=1;i<=count;i++)
    {
        for(j=1;j<=count;j++)
        {
            if(j<=count-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
            printf("\n");
    }
    return 0;
}