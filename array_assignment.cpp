// A program to perform CURD(Create, Update ,Read, Delete), Arrange and Search on Array 
#include<iostream>
using namespace std;
class array{
	public:
	int len , arr[], elem_count;
	// This constructor will initialize the length of an array //
		array(int a){
			len = a;
			arr[len] = {0};
		}
	// This function will get all the elements of an array //
		void get_elem(){
			cout<<"Enter elements of an array :"<<endl;
			for(int i = 0; i<len; i++){
				cin>>arr[i];
			}
		}
	// This function can display all the elements of array //
		void show_elem(){
			cout<<endl;
			for(int i = 0; i<len; i++){
				cout<<arr[i]<<endl;
			}
			cout<<endl;
		}
	// This function is able to insert new element at the give index //
		void insert_elem(int at_index, int new_elem){
			len++;
			// Shifting elements towards right //
			for(int i = len; i>=at_index; i--){
				arr[i] = arr[i-1];
			}
			arr[at_index] = new_elem;
		}
	// This function can be used to delete the elements of an array //
		void delete_elem(int index){
			for(int i = index; i<len; i++){
				arr[i] = arr[i+1];
			}
		}
	// This function will sort all the elements in ascending order //	
		void sort_in_asc(){
				for(int i = 0; i<len; i++){
					for(int j = i+1; j<len; j++){
						if(arr[i]>arr[j]){
							int temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						};
					}
				}
		}
	// This function will sort all the elements in descending order//	
		void sort_in_desc(){
			for(int i = 0; i<len; i++){
				for(int j = i+1; j<len; j++){
					if(arr[i]<arr[j]){
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					};
				}
			}
		}
	// This function will search the elements
		void search_elem(int elem){
			for(int i = 0; i<len; i++){
				if(arr[i]==elem){
					cout<<"The number "<<elem<<" is at index "<<i;
					break;
				}
			}
			
		}
	// This function will update the elements at the index //
		void update_elem(int of_index, int new_elem){
			arr[of_index] = new_elem;
		}
};
int main(){
	array a(5);
	a.get_elem();
	
	a.delete_elem(2);
	cout<<endl<<"After Deletion at index 2";
	a.show_elem();
	
	a.update_elem(2,100);
	cout<<endl<<"After Update at index 2 to 100";
	a.show_elem();
	
	a.insert_elem(0,45);
	cout<<endl<<"After adding 45 to index 0";
	a.show_elem();

	a.sort_in_asc();
	cout<<endl<<"After shorting in ascending order";
	a.show_elem();
	
	a.sort_in_desc();
	cout<<endl<<"After shorting in descending order";
	a.show_elem();
	
	a.search_elem(2);
	return 0;
}
