// Program to implement bollean algebra using the concept of class and objects
#include<iostream>
#include<math.h>
using namespace std;
class basic_gate{
	public:
		bool gand(bool a, bool b){//And Gate
			// Expression (A.B)
			return a && b;
		}
		bool gor(bool a, bool b){// Or Gate
			// Expression (A+B)
			return a || b;
		}
		bool gnot(bool x){// Not Gate
			// Expression x'
			return !x;
		}
		void truth_table(int var_len){
			int possible_result = pow(2,var_len);
			bool current_bits[var_len];
			bool future_bits[var_len];
			bool is_true;
			cout<<"Input | Output"<<endl;
			for(int i = 1; i<=possible_result; i++){
				bool bits[var_len];
				for(int j = 1; j<=var_len; j++){
					if(i==1){// Initilizing bits to false
						current_bits[j] = false;
						future_bits[j] = false;
					}
					
					if(j==1){// first bit
						is_true = current_bits[j];//Initilizing the and assignment bits	
						future_bits[j] = gnot(current_bits[j]);
					}
					is_true &= current_bits[j];
					if(is_true){
						future_bits[j+1] = gnot(current_bits[j+1]);
					}
//					cout<<current_bits[j];
					bits[j-1] = current_bits[j];
					current_bits[j] = future_bits[j];
					
				}
				for(int k = var_len-1; k>=0; k--){
					cout<<bits[k]<<" | ";
				}
				cout<<endl;
			}
		};
		
};

class derived_gate:public basic_gate{
	public:
		bool gnand(bool a, bool b){// Nand Gate
			// Expression (A.B)'
			return gnot(gand(a,b));
		}
		bool gnor(bool a, bool b){// Nor gate
			// Expression (A+B)'
			return gnot(gor(a, b));
		}
		bool gxor(bool a, bool b){// X-Or Gate
			// Expression A'B + AB'
			bool t1 = gand(gnot(a),b);
			bool t2 = gand(a,gnot(b));
			return gor(t1, t2);
		}
		bool gxnor(bool a, bool b){// X-Nor Gate
			// Expression (A'B + AB')'
			return gnot(gxor(a,b));
		}
}; 
class circuit:public derived_gate{
	public:
		bool half_add(bool a, bool b, char type = 's'){
			// Sum Expression = A'B + AB'
			// Carry Expression = AB
			if(type!='s'){// Sum
				bool t1 = gand(gnot(a),b);//A'B
				bool t2 = gand(a,gnot(b));//AB'
				return gor(t1, t2);
			}
			return gand(a,b);
		}
		bool full_add(bool a, bool b, bool c, char type = 's'){
			// sum expression = A exor B exor C
			// Carry expression = ab + ac + bc
			if(type=='c'){
				bool t1 = gand(a,b);//ab
				bool t2 = gand(a,c);//ab
				bool t3 = gand(b,c);//bc
				return gor(gor(t1,t2),t3);
			}
			return gxor(gxor(a,b),c);
		}
		bool half_sub(bool a, bool b, char type = 'd'){
			// Difference Expression = x'y + xy'
			if(type=='b'){
				return gand(gnot(a),b);
			}
			return gxor(a,b);
		}
		bool full_sub(bool a, bool b, bool c, char type='d'){
			// subtraction expression = A exor B exor C
			// Borrow expression = A'B + A'c + BC
			if(type=='b'){
				bool t1 = gand(gnot(a),b);
				bool t2 = gand(gnot(a),c);
				bool t3 = gand(b,c);
				return gor(gor(t1,t2),t3);
			}
			return full_add(a,b,c);			
		}
		
};
int main(){
	basic_gate g1;
	g1.truth_table(2);
//	cout<<g1.gand(true, false);
//	cout<<endl<<g1.gor(true, false);
//	cout<<endl<<g1.gnot(true);
	
//	cout<<endl<<" Derived Logic Gates "<<endl;
//	
//	circuit g2;
//	cout<<g2.full_sub(false,false, false,'b')<<endl;
//	cout<<g2.full_sub(false,false, true,'b')<<endl;
//	cout<<g2.full_sub(false,true, false,'b')<<endl;
//	cout<<g2.full_sub(false,true, true,'b')<<endl;
//	cout<<g2.full_sub(true,false, false,'b')<<endl;
//	cout<<g2.full_sub(true,false, true,'b')<<endl;
//	cout<<g2.full_sub(true,true, false,'b')<<endl;
//	cout<<g2.full_sub(true,true, true,'b')<<endl;

//	cout<<a;
	return 0;
}
