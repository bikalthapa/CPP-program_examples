// Program 14 ->  A program to print the day based on numeric value using swithc statement //
#include<iostream>
using namespace std;
int main(){
	int day;
	cout<<"Enter the index of the day";
	cin>>day;
	switch(day){
		case 0:
			cout<<"Today is Sunday";
			break;
		case 1:
			cout<<"Today is Monday";
			break;
		case 2:
			cout<<"Today is Tuesday";
			break;
		case 3:
			cout<<"Today is Wednesday";
			break;
		case 4:
			cout<<"Today is Thursday";
			break;
		case 5:
			cout<<"Today is Friday";
			break;
		default:
			cout<<"Today is Saturday";
	}
}
