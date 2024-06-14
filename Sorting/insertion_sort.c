#include<stdio.h>

void printarray(int* arr, int n){
	int i; 
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void insertionSort(int* arr, int n){
	int i,j,key;
	//Loop for passes
	for(i=1; i<=n-1; i++){
		key = arr[i];
		j = i-1;
		//loop for each pass
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
int main(){
	int arr[] = {12,64,65,7,23,9};
	int n = 6;
	printarray(arr,n);
	insertionSort(arr,n);
	printarray(arr,n);
	return 0;
}
