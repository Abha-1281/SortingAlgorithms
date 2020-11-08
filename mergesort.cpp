#include<bits/stdc++.h>
using namespace std;

void merge_list(int arr[] , int l, int mid, int h)
{
    int i=l;
    int j=mid+1;
    int B[8];
    int k=l;

    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
            B[k++]=arr[i++];
        else
            B[k++]=arr[j++];

    }
    for(;i<=mid;i++)
        B[k++]=arr[i];

    for(;j<=h;j++)
        B[k++]=arr[j];

    for(int i=l;i<=h;i++)
        arr[i]=B[i];

}

void mergesort(int arr[],int l, int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(arr, l,mid);
        mergesort(arr,mid+1,h);
        merge_list(arr,l,mid,h);
    }
}

int main()
{
    int arr[]={11,5,42,68,9,46,13,24};
    mergesort(arr,0,7);
    cout<<"Sorted Array: "<<endl;

    for(int i=0;i<8;i++)
        cout<<arr[i]<<"\t";



    return 0;
}
