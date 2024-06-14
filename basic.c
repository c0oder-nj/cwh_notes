//Program to find Addition ,Subtraction ,Multiplication, Transpose and Determinate of Matrix;

#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3], i, j, k;
    long determinant;
    printf("Enter the matrix A\n");
    
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the matrix B\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d", &B[i][j]);
        }
    }
    //Addition of the two Matrix
    printf("\nAddition of the two Matrix\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d  ", C[i][j]);
            
        }printf("\n");
    }
    //Subtraction of the two Matrix
    printf("\nSubtraction of the two Matrix\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d  ", C[i][j]);
            
        }printf("\n");
    }
    //Multiplication of the two Matrix
    printf("\nMultiplication of the two Matrix\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            C[i][j]=0;
            for(k=0;k<=2;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d  ", C[i][j]);
            
        }printf("\n");
    }


 determinant = A[0][0] * ((A[1][1]*A[2][2]) - (A[2][1]*A[1][2])) -A[0][1] * (A[1][0]
   * A[2][2] - A[2][0] * A[1][2]) + A[0][2] * (A[1][0] * A[2][1] - A[2][0] * A[1][1]);
 
  printf("\nDeterminant of A is: %ld", determinant);
  
  determinant = B[0][0] * ((B[1][1]*B[2][2]) - (B[2][1]*B[1][2])) -B[0][1] * (B[1][0]
   * B[2][2] - B[2][0] * B[1][2]) + B[0][2] * (B[1][0] * B[2][1] - B[2][0] * B[1][1]);
 
  printf("\nDeterminant of B is: %ld", determinant);

    //Transpose of the two Matrix A
    
    printf("\nTranspose of the Matrix A\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d  ", A[j][i]);
            
        }printf("\n");
    }
    //Transpose of the two Matrix B
    printf("\nTranspose of the Matrix B\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d  ", B[j][i]);
            
        }printf("\n");
    }
    return 0;
}