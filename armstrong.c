#include<stdio.h>

int main()
{
    int n , rem ,x ,sum ;
    printf("Enter an integer :");
    scanf("%d",&n);
    x = n;

    for(sum = 0 ; n > 0 ; n = n/10)
    {
        rem = n%10;
        sum= sum + (rem*rem*rem);
    }
    if(sum==x)
        printf("THIS IS ARMSTRONG NUMBER : %d",x);
    else
        printf("THIS IS NOT AN ARMSTRONG NUMBER : %d",x);


    return 0;

}
