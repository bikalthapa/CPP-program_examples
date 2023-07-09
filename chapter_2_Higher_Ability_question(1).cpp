// Question 1 (Higher Ability)
// A program to check palindrome number in c++
#include<iostream>
using namespace std;
int main(){
	string n;
	cout<<"Enter the number";
	cin>>n;
	int len = n.size();
	int count = 0;
	for(int i = 0; i<len; i++){
		if(n[i]==n[len-i-1]){
			count++;
		}
	}
	if(count==len){
		cout<<"It is palindrome Number";
	}else{
		cout<<"It is not a palindrome Number";
	}
	return 0;
}
