#include <stdio.h>

int partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int index = l;

	for (int i = l; i < r; i++)
	{
		if (arr[i] < pivot)
		{
			//swap arr[index] and arr[i]
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
			index++; 
		}
	}

	//swap arr[r] amd arr[index]
	int temp = arr[r];
	arr[r] = arr[index];
	arr[index] = temp;

	return index;
}

void quickSort(int arr[], int l, int r)
{
	if (l < r) //if l=r --> there is only one element
	{
		int p = partition(arr, l, r);
		quickSort(arr, l, (p-1)); //recursion qs call for left partition
		quickSort(arr, (p+1), r); //recursion qs call for right partition
	}
}

int main()
{
	int n;
	printf("enter size of array\n");
	scanf("%d", &n);
	
	int arr[n];
	printf("enter elements\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	quickSort(arr, 0, n-1);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

}