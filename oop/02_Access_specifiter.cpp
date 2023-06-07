//02 -> A program to demonstrate Access specifier in c++
#include<iostream>
using namespace std;
class user{
	private :
		string password;
	public :
		string name;
		
	void printname(){
		cout<<"The name of the user is "<<name<<" Whose password is "<<password;
	}
	void getname(){
		cout<<"Enter the name of user "<<endl;
		cin>>name;
	}
};
int main(){
	user a;
//	bikal.password = "Hello"; // Throw an error because password is private //

	a.getname();
	a.printname();	
	return 0;
}
