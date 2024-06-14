#include<stdio.h>
#include<conio.h>
void Toh(int n,char beg, char aux, char end);
int main(){

    int d;
    printf("Enter the Number of disks: ");
    scanf("%d",&d);
    Toh(d,'A','B','C');
    getch();
    return 0;
}
void Toh(int n,char beg, char aux, char end){
    if(n>=1){
        Toh(n-1,beg,end,aux);
        printf("%d Disk move %c to %c\n",n,beg,end);
        Toh(n-1,aux,beg,end);
    }
}