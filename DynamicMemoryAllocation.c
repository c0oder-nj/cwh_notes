#include<stdio.h>
#include<stdlib.h>

int main(){
    //use of malloc 
    // int *ptr,n;
    // printf("Enter the size of array you want to create: ");
    // scanf("%d",&n);
    // ptr = (int*)malloc(n*sizeof(int));

    // for(int i=0; i<n; i++){
    //     printf("\n\nEnter the element at %d position\n",i);
    //     scanf("%d",&ptr[i]);
    // }

    // for(int i=0; i<n; i++){
    //     printf("\n\nVale at %d position is %d\n",i,ptr[i]);
    // }

    //use of Calloc
    int *ptr,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));

    for(int i=0; i<n; i++){
        printf("\nEnter the value at address %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("\nThe value at address %d is %d\n",i,ptr[i]);
    }

    printf("Enter the new size of Array: ");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr,n*sizeof(int));

    for(int i=0; i<n; i++){
        printf("\nEnter the new value at address %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("\nThe new value at address %d is %d\n",i,ptr[i]);
    }

    return 0;
}