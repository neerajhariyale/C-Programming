//WAP to accept an int from the user and print the sum of all the number from 1 to that number . Assume that the user will input positive number only.


#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);

    while(n>=1)
    {
        sum = n + sum ;
        n=n-1;
    }
    printf("\nSum is %d",sum);



    return 0;
}
