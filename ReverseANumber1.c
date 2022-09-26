#include<stdio.h>
int ReverseNumber(int n)
{
   int sum=0,rem;
   while (n!=0)
   {
     rem=n%10;
     sum = sum*10 + rem;
     n=n/10;
   }
   return sum;
}

int main()
{
   int number, reverse;

   printf("Enter a positive interger: ");
   scanf("%d", &number);

   reverse = ReverseNumber(number);

   printf("The reverse of %d is: %d", number, reverse);

   return 0;
}
