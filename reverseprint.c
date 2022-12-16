#include<stdio.h>
#include<conio.h>

int main()
{
    int n , k;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Reverse order : ");

    while(n>0)
    {
        k = n%10;
        printf("%d",k);
        n = n/10;
    }
    return 0;
}
