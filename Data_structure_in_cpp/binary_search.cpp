#include<iostream>
using namespace std;
void binary_search(int n,int arr[]){
	
	
	int search,first,last,middle;
	cout<<"enter the element to be search.\n";
	cin>>search;
	first=0;
	last=n-1;
	while(first<=last){
		middle=(first+last)/2;
		if(arr[middle]<search){
			first=middle+1;
		}
		else if(arr[middle]==search){
			cout<<search<<" "<<" element found at location"<<" "<< middle;
			break;
		}
		else{
			last=middle-1;
		}
	}
	if(first>last){
		cout<<"list unsorted and element not found...\n";
	}
	
	
	
	
}


int main(){
	
	int arr[10],range;
	cout<<"enter the range of the array...\n";
	cin>>range;
	for(int i=0;i<range;i++){
		cout<<"enter the element in the array..\n";
		cin>>arr[i];
	}
	binary_search(range,arr);
	
	
	
}
