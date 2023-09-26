//Program 19 -> A program to print pattern using class and objects 
#include<iostream>
using namespace std;
class pattern{
	int l,s,p;
	// checking whether a pyramid is vertical or upside down //
	int getdistance(string gap, string name, char s_or_p, int i){

		if(gap=="left"){// Making looping condition for pattern which have gap in left side //
			if(name=="vertical"){
				if(s_or_p=='s'){
					s = l-i;
					return s;
				}else if(s_or_p=='p'){
					p = i;
					return p;
				}
			}else if(name=="upside_down"){
				if(s_or_p=='s'){
					s = i;
					return s;
				}else if(s_or_p=='p'){
					p = l-i;
					return p;
				}
			}
		}else if(gap=="none"){// Making loop condition for pattern which doesn't have gap //
			if(name=="vertical"){
				if(s_or_p=='s'){
					s = 0;
					return s;
				}else if(s_or_p=='p'){
					p = i;
					return p;
				}
			}else if(name=="upside_down"){
				if(s_or_p=='s'){
					s = 0;
					return s;
				}else if(s_or_p=='p'){
					p = l-i;
					return p;
				}
			}	
		}
		return 0;
	}
	public:
		void getlen(){
			cout<<"Enter a length of a pyramid";
			cin>>l;
		}
		void printpattern(string gap, string name, string type){
			string pattern;
			int i,j;// s stand for space formual and p stand for pattern_formula
			// Checking whether a type of pattern is half or full //
			if(type=="full"){
				pattern = "* ";
			}else if(type=="half"){
				pattern = "*";
			}
			
			for(i = 0; i<l; i++){// This loop is for vertical movement of pyramid
				for(j = 0; j<getdistance(gap,name,'s',i); j++){// This loop will generate space before pattern 
					cout<<" ";
				}
				for(int k = 0; k<getdistance(gap,name,'p',i); k++){// This will generate pattern after space
					cout<<pattern;
				}
				cout<<endl;
			}
			cout<<endl<<endl;
		}
		
};
int main(){
	pattern a;
	a.getlen();
	// Printing the pattern with a gap from left//
	a.printpattern("left","vertical","full");
	a.printpattern("left","vertical","half");
	a.printpattern("left","upside_down","full");
	a.printpattern("left","upside_down","half");
	// Printing thepattern with a gap from right //
	cout<<endl<<"Next pattern"<<endl;
	a.printpattern("none","vertical","half");
	a.printpattern("none","vertical","full");
	a.printpattern("none","upside_down","half");
	a.printpattern("none","upside_down","full");
	return 0;
}
