#include<stdio.h>

int main()
{
    int i , j , n = 5 ;
    int x ;
    for(i = 1 ; i <= 4; i++)
    {
        n=n-1;
        x = n ;                                                //4 3 2 1
        for(j = 4 ; j>=i ; j--)                                //3 2 1 
        {                                                      //2 1 
           printf("%d ",x);                                   //1
            x--;                                            
        }
        x=n-1;
        printf("\n");
    }

return 0;


}
