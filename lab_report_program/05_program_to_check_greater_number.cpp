// Program 5
// Program to check wether a number is greater than a number input by user using simple if statement
#include<iostream>
using namespace std;
int main(){
	int stored_value = 10;
	int input_value;
	
	// Taking input from the user //
	cout<<"Enter a number \t";
	cin>>input_value;
	
	// Checking wether a number is greater or not
	if(input_value>stored_value){
		cout<<"Input value is greater than stored value";
	}
	
	return 0;
}
/*
output:
Enter a number 100
Input_value is greater than stored value
*/
