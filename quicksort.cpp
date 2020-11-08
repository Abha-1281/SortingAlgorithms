#include<iostream>
using namespace std;


//pick last element as pivot element and place it in its correct place and
//place all smaller elements to left and larger elements to the right of the pivot
int partition_qs(int arr[],int l, int h){

        int pivot=arr[l];
        int i=l,j=h;
        while(i<j)
        {
            do
            {
                i++;
            }while(arr[i]<=pivot);

            do
            {
                j--;
            }while(arr[j]>pivot);

            if(i<j)swap(arr[i],arr[j]);
        }

        swap(arr[l],arr[j]);

        return j;

}

void quicksort(int arr[],int l, int h)
{
    int p;
    if(l<h)  // atleast there should be two elements
    {
        p=partition_qs(arr,l,h);
        quicksort(arr,l,p);
        quicksort(arr, p+1, h);
    }
}

int main()
{
    int arr[]={11,13,7,12,16,9,24,5,10,3,INT_MAX};

    quicksort(arr,0,10);

    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }


    return 0;
}
