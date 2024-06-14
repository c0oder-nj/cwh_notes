#include<bits/stdc++.h>
using namespace std;
char name[30];
class Greetings{
	public:
		void getName();
		void greet1();
		void greet2();
		void greet3();
};
void Greetings::getName(){
	
	cout<<"Enter your name user: ";
	strcpy(name,"Hello my name is Niraj.");
}
void Greetings::greet1(){
	cout<<"Good Morning "<<name<<endl;
}
void Greetings::greet2(){
	cout<<"Good Afternoon "<<name<<endl;
}
void Greetings::greet3(){
	cout<<"Good Evening "<<name;
}
int main(){
	Greetings obj;
	obj.getName();
	obj.greet1();
	obj.greet2();
	obj.greet3();
	return 0;
}