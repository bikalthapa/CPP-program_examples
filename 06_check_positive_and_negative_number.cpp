// 6 -> A program to check wether a number is positive or negative using if else statement
#include<iostream>
using namespace std;
int main(){
	int input;
	// Taking input from the user//
	cout<<endl<<"Enter any number : \t";
	cin>>input;
	
	// Checking wether a number is positive or negative
	if(input>0){
		cout<<endl<<"The number is positive"<<endl;
	}else{
		cout<<endl<<"The number is negative"<<endl;
	}
	return 0;
}
