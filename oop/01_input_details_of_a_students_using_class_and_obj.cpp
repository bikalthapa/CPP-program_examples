// A program to input name and age of a students using class and object concept //
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		
		void getage(){ // This function will take the age from the user 
			cout<<"Enter the age \t";
			cin>>age;
		}
		void getname(){ // This functio will take the name from the user 
			cout<<"Enter your name \t";
			cin>>name;
		}
		
		void showage(){ // This function will show the age of the user 
			cout<<"The age is "<<age<<endl;
		}
		void showname(){ // This function will show the name of the user //
			cout<<"Name is "<<name<<endl;
		}
};
int main(){
	student a;
	a.getname();
	a.getage();
	a.showage();
	a.showname();
	return 0;
}
