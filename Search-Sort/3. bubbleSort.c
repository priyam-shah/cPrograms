#include<stdio.h>

int main()
{
	printf("enter no of elements ");
	int n;
	scanf("%d", &n);

	int arr[n];
	printf("enter elements\n");
	for (int i = 0; i < n; i ++)
		scanf("%d", &arr[i]);

	
	for (int i = 0; i < n-1; i ++)
	{
		int noSwap = 1;
		for (int j = 0; j < n-i-1; j ++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				noSwap = 0;
			}
		}
		if (noSwap == 1)
			break;
	}

	for (int i = 0; i < n; i ++)
		printf("%d ", arr[i]);
}