// 2 -> A program to swap variables without using third variable
#include<iostream>
using namespace std;
int main(){
	// Declaring variables
	int a = 10;
	int b = 20;
	
	// Displaying the values before swapping //
	cout<<"The Values before swapping"<<endl;
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
	
	// Swapping variables//
	a = a + b;
	b = a - b;
	a = a - b;
	
	// Displaying the alues after swapping 
	cout<<"Values after swapping"<<endl;
	cout<<"The Values of a is "<<a<<endl;
	cout<<"The values of b is "<<b<<endl;
	
	return 0;
}
/*
Output:
The values before swapping
The value of a is 10
The value of b is 20
Values After swapping
The values of a is 20
The values of b is 10
*/
