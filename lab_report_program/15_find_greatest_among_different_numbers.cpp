//Program 15 -> A program to find greatest among different numbers
#include<iostream>
using namespace std;
int main(){
	int length = 7, i, j;
	int large;
	int value[length] = {2,1,3,2,4,8,6};
	large = value[0];
	for(i = 1; i<length; i++){
		if(value[j]>large){
			large = value[j];
		}
	}
	cout<<"The greatest number is "<<large;
	return 0;
}
