#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
int i, j,temp;
bool swapped;
for (i = 0; i < n-1; i++)
{
	swapped = false;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		temp =arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		swapped = true;
		}
	}

	//If no two elements were swapped inside inner loop, then break
	if (swapped == false)
		break;
}
}



int main()
{
	int arr[] = {29, 18, 46, 7, 13, 9, 54};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr, n);
	cout<<"Sorted Array: "<<endl;
	for(int i=0; i<n; i++)
        cout<<arr[i]<<"\t";
	return 0;
}

