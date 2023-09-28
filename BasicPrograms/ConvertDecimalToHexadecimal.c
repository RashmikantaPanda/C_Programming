#include <stdio.h>
#include <math.h>
int main()
{
	printf("------CONVERT DECIMAL TO HEXADECIMAL-------\n");
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);

	int p = 0, rem, hexadecimal = 0;
	char hexaArr[100];
	while (n > 0)
	{
		rem = n % 16;
		if (rem < 10)
			hexaArr[p] = rem + '0';  //hexaArr[p] = rem + 48;
		else
			hexaArr[p] = rem + 'A'-10;  //hexaArr[p] = rem + 55;
		p++;
		n = n / 16;
	}
	printf("Corresponding Hexadecimal No is : ");
	for (p = p - 1; p >= 0; p--)
	{
		printf("%c", hexaArr[p]);
	}
	return 1;
}
