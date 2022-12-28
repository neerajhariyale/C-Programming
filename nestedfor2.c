#include<stdio.h>

int main()
{                                                                               //D C B A
    int i , j;                                                                  //D C B
                                                                                //D C
    for (i = 65 ; i<=68 ; i++)                                                  //D
    {
        for(j = 68 ;j>=i ; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
