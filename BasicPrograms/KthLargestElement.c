#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int kthSmallest(int arr[], int N, int K)
{
	qsort(arr, N, sizeof(int), cmpfunc);
	return arr[K - 1];
}

int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]), k = 2;

	printf("%d smallest element is %d",k,kthSmallest(arr, N, k));
	return 0;
}


