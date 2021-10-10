#include<iostream>
using namespace std;


int main(){
	int n,arr[10],i,j,temp;
	cout<<"enter the range..\n";
	cin>>n;
	for( i=0;i<n;i++){
	cout<<"enter the elements in the array...\n";
	cin>>arr[i];
	cout<<"array elements is...\n";
	for( i=0;i<n;i++){
		cout<<arr[i]<<"\t";
		
	}
	    j=i-1;  // j points to the last element and i points to the first element
        i=0;     
        while(i<j)
        {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
        }
        cout<<"\n\n Reverse Array Elements : \n\n";
        for(i=0; i<n; i++)
        {
                cout<<arr[i]<<"\t";
        }
}
}
