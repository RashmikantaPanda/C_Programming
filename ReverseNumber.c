#include <stdio.h>

int main()
{

  int n, reverse = 0, remainder;

  printf("Enter a number : ");
  scanf("%d", &n);

  int temp=n;
  while (n != 0)
{
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reverse of %d is %d ", temp,reverse);

  return 0;
}
