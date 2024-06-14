#include<bits/stdc++.h>
using namespace std;

void printarray(int *arr,int n){
    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of nodes in the tree: ";
    cin>>n;
    cout<<"Enter nodes value: ";
    int arr[n+1];
    for(int i=1; i<+n; i++){
        cout<<"Enter "<<i<<" Node: ";
        cin>>arr[i];
        cout<<"Enter Left Child of node "<<i;
        cin>>arr[i*2];
        cout<<"Enter Right Child of node "<<i;
        cin>>arr[i*2+1];
    }

    printarray(arr,n+1);
return 0;
}