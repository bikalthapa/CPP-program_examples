// question no 1
// A program to find the area of a circle whose radius is entered by the user 
#include<iostream>
using namespace std;
int main(){
	float radius;
	cout<<"Enter the radius of circle";
	cin>>radius;
	
	float area  = (3.14)*radius * radius;
	cout<<endl<<"the area of given circle is "<<area;
	return 0;
}
