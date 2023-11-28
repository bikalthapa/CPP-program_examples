// Program_22 => A program in C++ to display the details of n students entered by the user using the 
// conecpt of an array of objects
#include<iostream>
using namespace std;
class students{
	int roll;
	char name[20];
	float marks;
	char address[50];
	public:
		void getdata(){
			cout<<"Enter name, roll, marks and address: "<<endl;
			cin>>name>>roll>>marks>>address;
		}
		void showdata(){
			cout<<"Entered details are "<<endl;
			cout<<name<<endl<<roll<<endl<<marks<<endl<<address<<endl;
		}
};
int main(){
	students s[48];
	int n;
	cout<<"enter number of students :";
	cin>>n;
	for(int i=0; i<n; i++){
		s[i].getdata();
		s[i].showdata();
	}
	return 0;
}
