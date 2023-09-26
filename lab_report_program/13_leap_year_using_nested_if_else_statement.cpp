// Program 13 -> A program to find leap year using nested if else statement //
#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter a year \t";
	cin>>year;
	if(year%100==0){
		// This is century year //
		if(year%400==0){
			cout<<year<<" is leap year "<<endl;
		}else{
			cout<<year<<" is not a leap year "<<endl;
		}
	}else{
		// This is not a century year //
		if(year%4==0){
			cout<<year<<" is leap year "<<endl;
		}else{
			cout<<year<<"is not a leap year "<<endl;
		}
	}
	return  0;
}
