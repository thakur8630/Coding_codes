#include<bits/stdc++.h>
using namespace std;
int getmin(int arr[],int n){
	int res=arr[0];
	for(int i=1;i<n;i++){
		res=min(min,arr[i]);
		return res;
	}
}
int getmax(){
	 int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
	
}
int main(){
	int arr[10],n;
	cout<<"enter the range...";
	cin>>n;
	cout>>"enter the elements...";
	cin>>arr[i];
	cout<<"the minimum elements is ..."<<getmin(arr,n)<<"\n";
	cout<<"the maximum elements is ..."<<getmax(arr,n);
	
}
