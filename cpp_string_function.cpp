// C++ string programs

#include <iostream>
// You must include string header file to use string function in your program
#include <string>
using namespace std;

int main(){
	// Declaring string //
	string f_name, l_name;
	int a = 10;
	int b = 20;
	
	// Taking string input from the user //
	cout<<"Enter your first name ";
	cin>>f_name;
	cout<<endl<<endl<<"Enter your second Name ";
	cin>>l_name;	
	
	/*
	The cin function takes only one word as input so, to take multi words as input we can use getline() function 
	the getline() function takes cin as first parameter and the string variable as second parameter 
	*/
	string addr;
	cout<<endl<<endl<<"Enter your address in two words : ";
	getline(cin, addr);
	
	cout<<endl<<endl<<"Your address is "<<addr;
	cout<<endl<<endl<<"Full Name is "<<f_name << " " << l_name<<endl<<endl; 
	
	/*
	addiction(+) operator adds number together but concatenate strings together //
	*/
	string full_name = f_name + l_name; 
	cout<<"The Sum of 10 and 20 is\t"<<(a+b)<<endl<<endl; // output will be 30 because numbers are added
	cout<<full_name<<endl<<endl; // Printing string //
	
	// We can also concatenate two strings using append() function in our c++ programs //
	string full_rev_name = l_name.append(f_name);
	cout<< full_rev_name<<endl<<endl;
	
	/*
	The length() and size() function returns the length of string including blank space 
	Note: length() and size() function are similar because both returns the length of string 
	*/
	int len = full_name.length();
	int siz = full_name.size();
	cout<<"The Length of full name is "<<len<<endl<<endl;
	cout<<"The size of full name is "<<siz<<endl<<endl;
	
	
	/*
	We can access the character of string by refering to its index number inside square bracktets []
	Note : first index is always 0
	*/
	char accessed_char = f_name[1]; // Accessing character from string //
	cout<<"The second alphabet of f name is \t"<<accessed_char<<endl<<endl;
	f_name[1] = 'v';
	cout<<"The changed name is \t"<<f_name<<endl<<endl;
	
	
	return 0;
}
