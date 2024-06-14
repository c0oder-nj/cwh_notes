#include<stdio.h>

void printarray(int* arr, int n){
	int i=0; 
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr = {12,64,65,7,23,9};
	int n = 6;
	printarray(arr,n);
	return 0;
}
