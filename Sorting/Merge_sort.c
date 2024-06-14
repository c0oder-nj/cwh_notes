#include<stdio.h>

void printarray(int *arr,int n){
	int i;
	for(i = 0; i<n;  i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void merge(int* arr, int mid, int low, int high){
	int i,j,B[50],k,niraj;
	i = low;
	j = mid+1;
	k = low;
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			B[k] = arr[i];
			i++;k++;
		}
		else{
			B[k] = arr[j];
			k++;j++;
		}
	}
	
	while(i<=mid){
		B[k] = arr[i];
		i++;k++;
	}
	while(j<=high){
		B[k] = arr[j];
		j++;k++;
	}
	
	for(niraj = low; niraj<=high; niraj++){
		arr[niraj] = B[niraj];
	}
}

void mergeSort(int *arr, int low,int high){
	int mid;
	
	if(low<high){
	mid = (low + high) / 2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);	
	merge(arr,mid,low,high);
	}
	
	
}

int main(){
	int arr[] = {9,14,4,8,7,5,6};
	int n=7;
	printarray(arr,n);
	mergeSort(arr,0,n-1);
	printarray(arr,n);
	return 0;
}
