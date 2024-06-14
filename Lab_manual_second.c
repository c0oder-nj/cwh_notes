#include<stdio.h>
#include<conio.h>
#define MAX 5

int n,del,pos,num,value;

void insert(int*,int pos, int num);
void delete(int*,int pos);
void reverse(int*);
void display(int*);
 void search(int*, int val);

void add(int *arr, int num){
    int i;
    for(i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
}

int main(){
    printf("Enter the number of elements in Array: ");
    scanf("%d",&n);
    int arr[n];
    add(arr,n);

    printf("\nElemnets of an Array is: ");
    display(arr);

	printf("\n\nEnter the position at which element you want to delete: ");
	scanf("%d",&del);
	
	delete(arr,del);
	display(arr);
    
	printf("\n\nEnter the position at which you want to insert an element in array: ");
	scanf("%d",&pos);
	printf("\n\nEnter the element you want to insert at %dth position: ",pos);
	scanf("%d",&num);
	
   insert(arr,pos,num);
   display(arr);
   
   
   
	printf("\n\nEnter the element you wish to search in array: ");
	scanf("%d",&value);
    search(arr,value);
   
   printf("\n\nArray after reverse is\n");
   reverse(arr);
   display(arr);

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
    for(i=n-1; i>=pos; i--){
        arr[i]=arr[i-1];
    }
    arr[i]=num;
}

void delete(int *arr, int pos){
    int i;
    for(i=pos; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[i-1]=0;
}

void reverse(int *arr){
    int i;
    for(i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i]=arr[MAX-1-i];
        arr[MAX-1-i]=temp;
    }
}

 void search(int *arr, int val){
     int i; 
     for(i=0; i<n; i++){
         if(arr[i]==val){
             printf("\n\nThe element %d is present at %dth position.",val,i+1);
             return ;
             }
			
         }
         if(i==n){
             printf("\n\nThe element %d is not present in the array.",val);
         }
     }
