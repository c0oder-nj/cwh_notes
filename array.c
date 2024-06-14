#include<stdio.h>
#include<conio.h>
#define MAX 5

int n;

// void insert(int*,int pos, int num);
void delete(int*,int pos);
void reverse(int*);
void display(int*);
// void search(int*, int num);

void insert(int *arr, int num){
    int i;
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
}

int main(){
    printf("Enter the number of elements in Array\n");
    scanf("%d",&n);
    int arr[n];
    insert(arr,n);
     
    // insert(arr,1,11);
    // insert(arr,2,25);
    // insert(arr,3,50);
    // insert(arr,4,60);
    // insert(arr,5,19);

    printf("\nElemnets of an Array is: ");
    display(arr);

    // delete(arr,5);
    // delete(arr,2);
    // printf("\n\nAfter deletion: ");
    // display(arr);

    // insert(arr,2,222);
    // insert(arr,5,555);
    // printf("\n\nAfter insertion: ");
    // display(arr);

    // reverse(arr);
    // printf("\n\nAfter reversing the Array: ");
    // display(arr);

    // search(arr,222);
    // search(arr,555);

    getch();
    return 0;

}

void display(int *arr){
    int i;
    printf("\n");
    for(i=0;i<n; i++){
        printf("%d\t",arr[i]);
    }
}

void insert(int *arr,int pos, int num){
    int i;
    for(i=MAX-1; i>=pos; i--){
        arr[i]=arr[i-1];
    }
    arr[i]=num;
}

void delete(int *arr, int pos){
    int i;
    for(i=pos; i<MAX; i++){
        arr[i-1]=arr[i];
    }
    arr[i-1]=NULL;
}

void reverse(int *arr){
    int i;
    for(i=0; i<MAX/2; i++){
        int temp = arr[i];
        arr[i]=arr[MAX-1-i];
        arr[MAX-1-i]=temp;
    }
}

// void serach(int* arr, int num){
//     int i; 
//     for(i=0; i<MAX; i++){
//         if(arr[i]==num){
//             printf("\n\nThe element %d is present at %dth position.",num,i+1);
//             return ;
//         }
//         if(i==MAX){
//             printf("\n\nThe element %d is not present in the array.",num);
//         }
//     }
// }
