#include <stdio.h>
// all are small case characters
int *freqOfEachCharacter(char st[])
{
	int size = sizeof(st) / sizeof(st[0]);

	int i;
	int arr[127];

	for (i = 0; i <= 127; i++)
	{
		arr[i] = 0;
		arr[st[i]]++;
	}
	for (i = 0; i < 127; i++)
	{
		if (arr[i] != 0)
			printf("Frequency of %c is  : %d\n", i, arr[i]);
	}

	return arr;
}

int main()
{
	printf("------FREQUENCY OF EACH CHARACTER-------\n");

	char ch[] = "bcabcabc";
	printf("%s\n", ch);

	int *arr;
	arr = freqOfEachCharacter(ch);
	// for (int i = 0; i <= 127; i++)
	// {
	//     if(*(arr+i)!=0)
	//     printf("Frequency of %c is  : %d\n", i, *(arr+i));
	// }

	return 1;
}
