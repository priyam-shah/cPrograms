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

	for (int i = 1; i < n; i ++)
	{
		int curr = arr[i];
		int j = i-1;

		while (arr[j] > curr && j >= 0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = curr;
	}

	for (int i = 0; i < n; i ++)
		printf("%d ", arr[i]);
}