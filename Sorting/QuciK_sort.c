#include<stdio.h>
void printarray(int *arr,int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int partition(int *arr,int low,int high){
	int i,j,temp;
	int pivot = arr[low];
	i = low + 1;
	j = high;
	
	do{
		while(arr[i]<=pivot){
		i++;
	}
	
	while(arr[j]>pivot){
		j--;
	}
	
	if(i<j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	}while(i<j);
	temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	return j;
}

void Quick_sort(int *arr,int low,int high){
	int partitionIndex;
		
	if(low<high){
		partitionIndex = partition(arr,low,high);//Correct index position of pivot
		Quick_sort(arr,low,partitionIndex-1);//Sorting of left sub array
		Quick_sort(arr,partitionIndex+1,high);//Sorting of right sub array
	}	
}

int main(){
	int arr[] = {3,5,2,13,12};
	int n=5;
	printarray(arr,n);
	Quick_sort(arr,0,n-1);
	printarray(arr,n);
	return 0;
}
