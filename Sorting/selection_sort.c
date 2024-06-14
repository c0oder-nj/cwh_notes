#include<stdio.h>

void printarray(int* arr,int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void selectionSort(int* arr,int n){
	int indexofmin,temp,i,j;
	for(i=0; i<n-1; i++){
		indexofmin = i;
		for(j=i+1; j<n; j++){
			if(arr[j]<arr[indexofmin]){
				indexofmin = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[indexofmin];
		arr[indexofmin] = temp;
	}
}

int main(){
	int arr[] = {5,1,9,7,0};
	int n = 5;
	printarray(arr,n);
	selectionSort(arr,n);
	printarray(arr,n);
	return 0;
}
