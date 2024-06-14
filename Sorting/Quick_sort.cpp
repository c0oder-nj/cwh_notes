#include<bits/stdc++.h>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int *arr,int low,int high){
    int pivot = arr[low];
    int i,j;
    i = low + 1;
    j = high;
    do{
    while(arr[i]<=pivot){
        i++;
    }

    while(arr[j]>=pivot){
        j--;
    }

    if(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }

    } while(i<j);

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void QuickSort(int *arr,int low,int high){
    if(low<high){
    int partitionIndex = partition(arr,low,high);
    QuickSort(arr,low,partitionIndex-1);
    QuickSort(arr,partitionIndex+1, high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArr(arr,n);
    QuickSort(arr,0,n-1);
    printArr(arr,n);
return 0;
}