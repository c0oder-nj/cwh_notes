#include<stdio.h>

void printarray(int* arr,int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
}

int smallest(int* arr, int k, int n){
	int j;
	int pos = k;
	int small =  arr[k];
	for(j=k+1; j<=n-1; j++){
		if(small>arr[j]){
			small = arr[j];
			pos = j;
		}
	}
	return pos;
}

int main(){
	int arr[] = {79,69,79,3,5,1,0,15,-2};
	int k,n=9,pos,temp;
	for(k=0; k<n-1; k++){
		pos = smallest(arr,k,n);
		temp = arr[k];
		arr[k] = arr[pos];
		arr[pos] = temp;
	}
	printarray(arr,n);
	return 0;
}
