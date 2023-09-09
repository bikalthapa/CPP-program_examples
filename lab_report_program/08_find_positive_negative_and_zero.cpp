// 8 -> A program to check wether a number is positive negative or zero
#include<iostream>
using namespace std;
int main(){
	int input;
	cout<<"Enter a number \t";
	cin>>input;
	if(input==0){
		cout<<"The number is zero"<<endl<<endl;
	}else if(input>0){
		cout<<"The number is positive"<<endl<<endl;
	}else{
		cout<<"The number is negative "<<endl<<endl;
	}
	return 0;
}
