// Question 5
// Write a program in c++ to find the factorial of a number entered by the user.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	int fact = 1;
	for(int i = 1; i<=n; i++){
		fact = fact * i;
	}
	cout<<"The factorial is "<<fact;
	return 0;
}
