// 10-> A program to find greatest among 3 numbers 
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	// Taking inputs from the user
	cout<<"Enter three numbers"<<endl;
	cin>>a>>b>>c;
	// Finding the greatest among 3 numbers
	if(a>b&&a>c){
		cout<<a<<" is greater among three numbers";
	}else if(b>a&&b>c){
		cout<<b<<" is greater among three numbers";
	}else{
		cout<<c<<" is greater among three numbers";
	}
	return 0;
}
