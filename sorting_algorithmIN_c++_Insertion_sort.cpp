#include<iostream>
using namespace std;
int main(){
	int arr[10] = {39,9,45,63,18,81,108,54,72,36};
	for(int k=1; k<=9; k++){
		int temp = arr[k];
		int j = k-1;
		while(temp<=arr[j]){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = temp;
	}
	for(int i=0; i<10; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
