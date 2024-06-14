#include<stdio.h>
#include<string.h>

struct student{
int id;
float marks;
char name[25];
};


struct student sahil,nitesh,milan;
int main(){

sahil.id=1;
sahil.marks=45.5;
//sahil.name = "Hello my name is sahil";
strcpy(sahil.name, "Hello my name is Sahil Yadav.");

milan.id=1;
milan.marks=40.5;
//milan.name = "Hello my name is Milan";
strcpy(milan.name, "Hello my name is Milan Mory.");

nitesh.id=1;
nitesh.marks=98;
//nitesh.name = "Hello my name is Nitesh";
strcpy(nitesh.name, "Hello my name is Nitesh Rathore.");

printf("Sahil's marks is %d\n",sahil.marks);
printf("Sahil's Name is %s\n",sahil.name);
    return 0;
}