#include<stdio.h>

int linearSearch(int n, int arr[], int k)
{
	for(int i = 0; i < n; i++)
	{
		if (arr[i] == k)
			return i;
	}
	return -1;
}

int binerySearch(int n, int arr[], int k)
{
	int s = 0, e = n-1;
	while (s <= e)
	{
		int mid = (s+e)/2;

		if (k == arr[mid])
			return mid;

		else if (k < arr[mid])
			e = mid - 1;

		else 
			s = mid + 1;
	}
	return -1;
}

int main()
{
	int n;
	printf("enter no of elements\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter elements\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}

	int k;
	printf("enter key to find\n");
	scanf("%d", &k);

	printf("result from linearSearch func --> %d\n",linearSearch(n, arr, k));
	printf("result from binerySearch func --> %d",binerySearch(n, arr, k));	
}