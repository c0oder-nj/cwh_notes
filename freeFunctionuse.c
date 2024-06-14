#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,n;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        printf("\nEnter the value at address %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("\nThe value at address %d is %d\n",i,ptr[i]);
    }
    // free(ptr);

    printf("%d\n",sizeof(ptr));
    return 0;
}