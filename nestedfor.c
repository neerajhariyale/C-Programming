#include<stdio.h>
int main()
{
    int i ,j;
    for(i=4;i>=1;i--)
    {                                                                           //4
        for(j=4;j>=i;j--)                                                       //4 3
        {                                                                       //4 3 2
            printf("%d ",j);                                                    //4 3 2 1
        }
        printf("\n");
    }
    return 0;
}
