#include<bits/stdc++.h>
using namespace std;
int arrprint(int arr[] ,int n){
	for(int i=0;i<n;i++){
		cout<<"enter the elements";
		cin>>arr[i];
	}
	
	  
		cout<<"the array is...";
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		
		//inserting a number in array...;
		int num,pos;
		cout<<"enter the number to be insert in an array...";
		cin>>num;
		cout<<"enter the position to insert the elements..";
		cin>>pos;
		for(int i=n-1;i>=pos;i--){
			arr[i+1]=arr[i];
			arr[pos]=num;
			n=n+1;
		}
		cout<<"efter insertion the elements";
		for( int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}

	
}
int main(){
	int arr[10],n,i;
	cout<<"range??";
	cin>>n;
	cout<<arrprint(arr,n);



  return 0;
}
