// 01 -> A program to swap two variables using third variable
#include<iostream>
using namespace std;
int main(){
	// Declaring Variables
	int a = 10;
	int b = 20;
	// Printing the values before swapping
	cout<<"Before swapping "<<endl;
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
	
	// Swapping the values
	int temp = a;
	a = b;
	b = temp;
	
	// Printing the values after swapping
	cout<<"After swapping"<<endl;
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
	
	return 0;
}
/*
Output :
Before Swapping
The value of a is 10
The value of b is 20
After Swapping
The value of a is 20
The value of b is 10
*/
