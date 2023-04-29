// A program to demonstrate manipulator in c++
#include<iostream>
#include<iomanip>
#include<ostream>
using namespace std;
int main(){
	//______________setw() manipulator__________________//
	/*
		Syntax : setw(int x);
		=> The setw() function helps in setting the width of the field with the number specified in paranthesis.
		=> We should always pass integer value to setw() function as paramter.
	*/
	int num = 456;
	cout<<"Before Setting the width:\n"<<num<<endl;
	// Using setw() function //
	cout<<"Setting the width using setw to 6:\n"<<setw(6)<<num<<endl<<endl<<endl<<endl;
	
	
	
	//______________setfill() manipulator______________//
	/*
		Syntax : setfill(char a);
		=> The setfill() function helps in filling to the width of the field with the charater specified in paranthesis.
		=> This function always comes with setw() function.
		=> Always use single quotes('') to pass character as parameter in setfill() manipulator. 
		=> This manipulator fills the same in a whole program until the parameter is changed.
	*/
	int num1 = 789;
	cout<<"Before Setting the width:\n"<<num1<<endl;
	cout<<"After setting width:"<<setw(6)<<num1<<endl;
	cout<<"After setting setfill : "<<setw(6)<<setfill('a')<<num1;
	
	//______________setiosflags() manipulator________________________________//
	/*
		syntax: setiosflags(ios:left)
		=> The setiosflags(ios::left) function helps to set the width from left
		=> By default setw() function shift an datatype towards right, we can change it by passing parameter like above.
	*/
	cout<<endl<<endl<<endl<<"After setting width and flags:"<<setw(6)<<setfill('*')<<setiosflags(ios::left)<<num<<endl;	
	
	
	//________________setprecision() manipulator_____________________________//
	/*
		Syntax: setprecision(int p);
		=> It is an output manipulator that controls the decimal number of digits to display after the decimal points
			for a floating point value.
	*/
	// Initializing the floating values //
	float number = 123.45564;
	cout<<endl<<endl<<endl<<"Before setting precision:"<<number<<endl;
	// Using setprecision()
	cout<<"Setting the precision to 3: "<<fixed<<setprecision(3)<<number<<endl<<endl<<endl;
	
	
	//________________setbase() manipulator___________________________________//
	/*
		=> This manipulator is used to change the base of a number to a different variable
		=> The following base values are supported by the c++ language:
		hexadecimal, octual, decimal
	*/
	int base_num = 102045;
	cout<<"Hexadecimal values = "<<setbase(16)<<base_num<<endl;
	cout<<"Octual values = "<<setbase(8)<<base_num<<endl;
	cout<<"Decimal Values = "<<setbase(10)<<base_num<<endl;
	
	return 0;
}
