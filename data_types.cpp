// Data types and variables in C++
#include<iostream>
using namespace std;
int main(){
	int a = 10; // integer holds whole numbers withou decimal //
	double b = 5.20; // double holds floating points numbers (decimal) //
	char c = 'd'; // character holds single character //
	string name = "bikal"; // string holds text //
	bool condition = true; // bool holds boolean (true or false) //
	
	// Printing variables //
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<"My Name is "<<name<<endl;
	cout<<condition<<endl;
	
	// Declaring multiple variables of same datatypes //
	int age = 10, rollno = 20;
	cout<<"I am "<<age<<"Years old. My Roll No is "<<rollno<<endl;
	
	// Declaring constant variables //
	const float pi = 3.14; // Here the value of pi doesn't change in the program and always remains 3.14 //
	cout<<pi;
	
	return 0;
}
