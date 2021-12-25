/*c program to find the number is prime or not using funtion*/

#include<stdio.h>
int is_prime(int n)
{
   int i;
   if (n==1)
     return 0;

   for (i=2; i<n/2; i++)
       if (n%i==0)
       return 0;

   return 1;
}

int main()
{

     int n;
     printf("\n enter the number");
     scanf("%d",&n);
     if(is_prime(n))
            printf("\n given number is prime");
     else
            printf("\n given number is not prime");
}