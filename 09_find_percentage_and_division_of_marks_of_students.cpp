// 9 -> A program to find percentage and division of marks of students in 5 subjects.
#include<iostream>
using namespace std;
int main(){
	int tot_subject = 2;
	int full_marks = 100;
	float percentage, marks[tot_subject], total_obtain;
	int i;
	// Taking input from the user //
	for(i=0; i<tot_subject; i++){
		cout<<"Enter the marks in subject "<<i<<"\t";
		cin>>marks[i];
		total_obtain = total_obtain + marks[i];
	}
	percentage = (total_obtain/(tot_subject*full_marks)) * 100;
	cout<<"You got "<<percentage<<" Percentage"<<endl;
	
	// Checking division of a students //
	if(percentage>=90){
		cout<<"Distinction";
	}else if(percentage>=80){
		cout<<"First Division";
	}else if(percentage>=70){
		cout<<"Second Division";
	}else if(percentage>=60){
		cout<<"Third Division";
	}else{
		cout<<"You Failed !";
	}
	cout<<endl;
	return 0;
}
