#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{
	int i,j,key;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = { 17, 12, 8, 25, 5, 44, 10, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionsort(arr, n);

	cout<<"Sorted Array is:"<<endl;
	for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
	}

	return 0;
}



