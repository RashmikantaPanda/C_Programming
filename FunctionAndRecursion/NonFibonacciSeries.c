#include<stdio.h>
#include<conio.h>
// Printing all non-fibonacci nos between 1-100
void nonFibonacciUptoRange(int n){
  int a,b,c,d,x;
  a=0;
  b=1;
  c=0;
  while(c<=n){
    c=a+b;
    a=b;
    b=c;
    d=a+b;
    for(x=c+1; x<d; x++){
      if(x<=n){
        printf("%d ",x);
      }
      else{
        break;
      }
    }

  }
}
int main()
{
 int n;
 printf("NON FIBONACCI SERIES UPTO RANGE(100)\n");
 printf("Enter the range : \n");
 scanf("%d", &n);

 nonFibonacciUptoRange(n);

 return 1;
}
