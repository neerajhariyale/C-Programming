#include<stdio.h>

int main()
{
    int n , fact = 1 ;
    printf("Enter an int :");
    scanf("%d",&n);

    do
    {
        fact = fact * n;
        n--;
    }while(n>1);
    printf("Fact is %d",fact);

    return 0;
}
