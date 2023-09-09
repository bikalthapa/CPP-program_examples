// long question (1)
// Write a program in c++ to input the details of n students from the user and display the details of students.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter length";
	cin>>n;
	string name[n];
	int age[n];
	int grade[n];
	for (int i = 0; i<n; i++){
		cout<<endl<<"Enter name, age and garde of a students ";
		cin>>name[i]>>age[i]>>grade[i];
		cout<<"The details of students is given below "<<endl;
		cout<<"Name : \t"<<name[i]<<endl;
		cout<<"Age : \t"<<age[i]<<endl;
		cout<<"Grade :\t"<<grade[i]<<endl<<endl;
	}
	return 0;
}
