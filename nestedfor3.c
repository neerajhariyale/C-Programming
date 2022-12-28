#include<stdio.h>

int main()
{
    int i , j ;
    for(i = 4 ; i>= 1; i--)
    {
        for(j = 4; j>=i ; j--)                                    //4
        {                                                         //4 3
            printf("%d ",j);                                      //4 3 2
        }                                                         //4 3 2 1
        printf("\n");
    }
    return 0;
}
