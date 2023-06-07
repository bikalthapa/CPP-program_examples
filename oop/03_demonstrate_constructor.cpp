// 02-> A program to demonstrate construction in c++
#include<iostream>
using namespace std;
class constructor_demo{
	public:
		int defalut_constructor = 10;
		
		constructor_deomo(int arg1){
			int para_const = arg1;
		}
		
};
int main(){
	constructor_demo a, b(1);
	cout<<a.defalut_constructor;
	cout<<b.para_const;
	return 0;
}
