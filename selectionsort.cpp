#include<iostream>
using namespace std;

void selectionsort(int arr[], int n){

    for(int i=0;i<n-1;i++)
    {
        int k=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        swap(arr[k],arr[i]);
    }

}

int main()
{
    int arr[]={18,26,3,2,15,40};
    int n=6;
    selectionsort(arr,n);

    cout<<"Sorted Array:" <<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
