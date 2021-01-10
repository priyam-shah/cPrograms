#include<stdio.h>

int main()
{
	printf("enter length of array ");
	int n;
	scanf("%d",&n);

	printf("enter elements\n");
	int arr[n];
	for(int i = 0; i < n; i ++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < (n-1); i ++)
	{
		int min = i;

		for (int j = (i+1); j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	
	printf("sorted array ");
	for(int i = 0; i < n; i ++)
		printf("%d ", arr[i]);
}