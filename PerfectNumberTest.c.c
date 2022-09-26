#include<stdio.h>
int perfectNumber(int  );
int main()
{

  int num;
  printf("Enter any number : ");
  scanf("%d", &num);
  perfectNumber(num);
  return 0;
}
int perfectNumber(int num)
{
  int n,sum=0,i;
  n=num;
  for(i=1; i<n; i++)
  {
     if(num%i==0)
        sum=sum+i;
  }
  if(num==sum)
     printf("%d is Perfect Number",num);
  else
     printf("%d is not Perfect Number",num);
}
