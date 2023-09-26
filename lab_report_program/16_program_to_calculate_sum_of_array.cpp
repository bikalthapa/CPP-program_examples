// Program 16 -> A program to read a number 'n' and calculate the sum of all numbers up to 'n' using for loop
#include<iostream>
using namespace std;
int main(){
	int n, i;
	cout<<"Enter a number";
	cin>>n;
	int sum = 0;
	for(i = 0; i<n; i++){
		sum = sum+i;
	}
	cout<<"The sum is "<<sum;
	return 0;
}
