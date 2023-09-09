// 11-> A program to convert uppercase alphabets into lowercase and vice versa
#include<iostream>
using namespace std;
int main(){
	char a;
	// Taking input from the user//
	cout<<"Enter any alphabet : \t";
	cin>>a;
	int asci_val = int(a);
	
	if(asci_val>=97 && asci_val<=122){
		cout<<"The uppercase alphabet is "<<char(asci_val - 32);
	}else if(asci_val>=65 && asci_val<=90){
		cout<<"The lowercase alphabet is "<<char(asci_val + 32);
	}else{
		cout<<"Please enter the valid character";
	}
	cout<<endl;
	return 0;
}
