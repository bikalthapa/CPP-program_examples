// Working with input and output function in c++ programming langugae.
// iostream stands for input output stream. It is a header file which contains all input output related function
#include<iostream>
using namespace std;

// This is the main function of our c++ program.
int main(){
	// This is single line comment //
	/*
	This is multiline comment.
	<<endl is same as \n which moves cursor to next line
	
	*/
	int a;
	cout<<"Please Enter any number\n";
	
	cin>>a;
	
	cout<<"The entered number is " + a<<endl;
	return 0;
}
