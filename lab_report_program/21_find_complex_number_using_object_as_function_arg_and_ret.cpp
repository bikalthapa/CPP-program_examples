// Program 21 => Program to find the sum of two complex numbers entered by the user using the concept of 
// object as function argument and return types
#include <iostream>
using namespace std;
class complex {
	float real, imag;
	public:
		void getdata(){
			cin>>real>>imag;
		}
		void showdata(){
			cout<<"The sum is "<<endl;
			cout<<real<<"+i"<<imag;
		}
		complex addition(complex cc1, complex cc2){
			complex temp;
			temp.real = cc1.real + cc2.real;
			temp.imag = cc1.imag + cc2.imag;
			return temp;
		}
};
int main(){
	complex c1, c2, c3;
	cout<<"Enter first complex no. "<<endl;
	c1.getdata();
	cout<<"Enter second complex no. "<<endl;
	c2.getdata();
	c3 = c3.addition(c1,c2);
	c3.showdata();
	return 0;
}
