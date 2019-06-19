#include <stdio.h>

void insertSort(int arr[], int len)
{
	int i, j;
	int key = 0;

	for (i = 1; i < len; i++)
	{
		j = i - 1;
		key = arr[i];
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	return;
}

int main()
{
	int index = 0;
	int arr[] = {1, 3, 5, 2, 4, 8, 6};
	int len = sizeof(arr) / sizeof(int);
	insertSort(arr, len);
	for (index = 0; index < len; index++)
	{
		printf("%d\t", arr[index]);
	}
	printf("\n");
}
