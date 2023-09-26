// Program 17 -> A program to find palindrome numbers 
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a number";
	cin>>a;
	int testnum = a, digit, rev = 0;
	while(testnum!=0){
		digit = testnum%10;
		rev = rev * 10 + digit;
		testnum = testnum /10;
	}
	if(rev==0){
		cout<<"The number is palindrome";
	}else{
		cout<<"The number is not palindrome";
	}
	return 0;
}
