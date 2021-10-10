#include <bits/stdc++.h>
using namespace std;
int array_sum( int arr[],int n){
	int sum=0;

	for(int i=0;i<n;i++){
	cout<<"enter the elements...";
	cin>>arr[i];
	sum+=arr[i];
}
return sum;
}

int main(){
	int arr[10],n,i,sum=0;
	cout<<"what range ??";
	cin>>n;

  cout<<"the sum of given array is..."<<array_sum(arr,n);
  return 0;
  
}

