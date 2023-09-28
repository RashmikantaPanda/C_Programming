#include<stdio.h>
#include<math.h>
int main(){
	printf("------CONVERT DECIMAL TO OCTAL-------\n");
	int n,p=0,rem,octal=0;
	printf("Enter a decimal number : ");
	scanf("%d", &n);
	
	while(n>0){
		rem=n%8;
		int square=pow(10,p);
		octal+=rem*square;
		p++;
		n=n/8;
	}
	printf("The number is %d ",octal);
	return 1;
}


// #include <stdio.h>

// int main() {
//     printf("------CONVERT DECIMAL TO OCTAL-------\n");
//     int n, p = 0, rem, octal = 0, positionValue = 1;
//     printf("Enter a decimal number : ");
//     scanf("%d", &n);

//     while (n > 0) {
//         rem = n % 8;
//         octal += rem * positionValue;
//         positionValue *= 10;
//         n = n / 8;
//     }
//     printf("The number is %d\n", octal);
//     return 0;
// }
