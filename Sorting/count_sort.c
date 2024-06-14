#include<stdio.h>
#include<stdlib.h>

void printarray(int *arr,int n){
	int i;
	for(i = 0;i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int maximum(int* arr,int n){
	int max = arr[0],i;
	for(i=1; i<n; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}

void countSort(int *arr,int n){
	int i,j,k;
	int max = maximum(arr,n);
	int* count = (int*)malloc((max+1)*sizeof(int));
	
	for(i=0; i<=max; i++){
		count[i] = 0;
	}
	k = 0;
	while(k<n){
		count[arr[k]] += 1;
		k++;
	}
	i = 0;//indexing of counter array
	j = 0;//indexing of main array
	
	while(i<=max){
		if(count[i]!=0){
			arr[j] = i;
			j++;
			count[i] -= 1;
		}
		else{
			i++;
		}
	}
}

int main(){
	int arr[] = {9,1,4,14,4,15,6};
	int n = 7;
	printarray(arr,n);
	countSort(arr,n);
	printarray(arr,n);
	
	return 0;
}
