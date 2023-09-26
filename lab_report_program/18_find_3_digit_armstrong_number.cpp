// Progarm 18 -> A program to check 3 digit armstrong number
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter 3 digit number";
	cin>>a;
	int testnum = a, digit, rev = 0;
	while(testnum!=0){
		digit = testnum%10;
		rev = digit * digit * digit + rev;
		testnum = testnum/10;
	}
	if(rev==a){
		cout<<"The number is armstrong";
	}else{
		cout<<"The number is not armstrong";
	}
}
