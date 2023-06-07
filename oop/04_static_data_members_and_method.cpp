// A program to demonstrate static data members and methods //
#include<iostream>
using namespace std;
class mark_sheet{
	int marks;
	public:
	static int count;
		void getmarks(void){// This function will take input the marks from the user //
			cout<<"Enter the marks"<<endl;
			cin>>marks;
			count++;
		}
		void showmarks(){// This function will show the value of marks input by the user //
			cout<<"The marks is "<<marks<<endl;
		}
		static void display_counter(){// This static function is used to display 'count' variable //
			cout<<"The counter is "<<count;
		}
};
int mark_sheet::count;
int main(){
	mark_sheet bikal, Tilak;
	bikal.getmarks();
	Tilak.getmarks();
	
	bikal.showmarks();
	Tilak.showmarks();
	
	mark_sheet::display_counter();
	return 0;
}
