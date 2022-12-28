//WAP to accept an integer from the user and if it is positive then print all the number from 1 to that number and if it is negative then print all the number from that number to -1.

#include<stdio.h>

int main()
{

   int n;int i = 1;
   printf("Enter an int :");
   scanf("%d",&n);

  if(0<n)
   {
       while(i<=n)
       {
           printf("\n%d",i);
           i=i+1;
       }
   }
   else
   {
       while(n<0)
       {
           printf("\n%d",n);
           n=n+1;
       }
   }

return 0;
}

