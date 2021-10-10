#include<iostream>
using namespace std;
void linear_search(int n,int arr[]){
	
	
	int search;
	cout<<"enter the number to be searched\n";
	cin>>search;
	for(int i=0;i<n;i++){
		if(arr[i]==search){
		
			cout<<search<<"  "<<"is present at location"<<"  "<<i+1;            
			return;
		}
		
	 
	
	}
	
	cout<<"element not found...\n";
	
	
}
int main(){
	int range,arr[10];
	cout<<"enter the range of the array element";
	cin>>range;
	for(int i=0;i<range;i++){
		cout<<"enter the elements..";
		cin>>arr[i];
	}
	linear_search(range,arr);

	
	return 0;
	
}
