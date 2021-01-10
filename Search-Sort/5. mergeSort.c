#include<stdio.h>

void merge(int arr[], int l, int mid, int r)
{
	//two temp arrays
	int n1 = mid - l + 1;
	int n2 = r - mid;

	int a[n1]; // temp arrays
	int b[n2];

	//store arr[] in these new temp arrays
	for (int i = 0; i < n1; i++)
	{
		a[i] = arr[l+i]; //fill arrays
	}

	for (int i = 0; i < n2; i++)
	{
		b[i] = arr[mid+1+i];
	}

	//merge and store in arr[k]
	int i = 0, j = 0, k = l; //pointers i and j to merge array a and b, pointer k for arr[]
	while (i < n1 && j < n2)
	{
		if (a[i] < b[j])
		{
			arr[k] = a[i];
			k++; i++;
		}

		else
		{
			arr[k] = b[j];
			k++; j++;
		}
	}

	//while loops for left over numbers
	while (i < n1)
	{
		arr[k] = a[i];
		k++; i++;
	}

	while (j < n2)
	{
		arr[k] = b[j];
		k++; j++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)	//if l = r means only one element left
	{
		int mid = (l+r)/2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		merge(arr, l, mid, r); //arrays to merge --> l to mid & mid+1 to r
	}
}

int main()
{
	int arr[] = {5, 4, 3, 2, 1};
	mergeSort(arr, 0, 4);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
}