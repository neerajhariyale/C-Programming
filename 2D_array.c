//2-D array
#include<stdio.h>

int main()
{
    int marks[3][4] , i , j,sum = 0 ;
    for(i = 0 ; i<3 ;i++)
    {
        printf("Student NO. %d",i+1);
        printf("\n");
        for(j = 0 ;j<4 ; j++)
        {
            printf("Enter the subject marks :" );
            scanf("%d",&marks[i][j]);
        }
        printf("\n");
    }



  //for print
    for(i = 0 ; i<3 ;i++)
    {
        for(j = 0 ;j<4 ; j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
