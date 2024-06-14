#include<iostream>
using namespace std;
int main(){
	int arr[5] = {6,7,5,1,9};

	int temp = arr[0];
	int pos;
	for(int j=0; j<5; j++){
			int sm = arr[j];
	for(int i=1; i<5; i++){
		if(sm>arr[i]){
			pos = i;
			sm = arr[i];
		}
	}
	arr[0] = arr[pos];
	arr[pos] = temp;
	}
	for(int j=0; j<5; j++){
		cout<<arr[j]<<" ";
	}
	return 0;
}
