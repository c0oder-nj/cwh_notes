#include<stdio.h>

void printarray(int* arr, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void bubbleSort(int* arr, int n){
	int i,j,temp;
	for(i=0; i<n-1; i++){ //for Number of passes
	printf("We are at pass number %d\n",i+1);
		for(j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void bubbleSortAdaptive(int *arr, int n){
	int i,j,temp;
	int issorted = 1;
	for(i=0; i<n-1; i++){
		printf("We do %d pass currently\n",i+1);
		for(j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				issorted = 0;
			}
		}
		if(issorted){
			return;
		}
	}
}
int main(){
//	int arr[] = {12,54,65,7,23,9};
	int arr[] = {1,2,3,4,5,6};
	int n = 6;
	printarray(arr,n); // Array before sorting
//	bubbleSort(arr,n); // Sorting Algorithm of bubble sort
	bubbleSortAdaptive(arr,n);
	printarray(arr,n); // Array after sorting
	
	return 0;
}
