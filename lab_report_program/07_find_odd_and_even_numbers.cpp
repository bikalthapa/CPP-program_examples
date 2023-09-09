// 7-> A program to check a number is even or odd using if else statement
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the number :";
	cin>>a;
	
	// Checking wether a number is odd or even //
	if(a%2==0){
		cout<<"The number is even"<<endl;
	}else{
		cout<<"The number is odd"<<endl;
	}
	return 0;
}
