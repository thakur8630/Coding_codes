#include<iostream>
using namespace std;
int main(){
	 int arr1[10],arr2[10],arr3[20],n,i,n1,n2,m,index=0;
	 cout<<"range?\n";
	 cin>>n;
	 for(i=0;i<n;i++){
	 cout<<"enter the elements in the first array....\n";
	 cin>>arr1[i];
}
	 for(i=0;i<n;i++){
	 cout<<"enter the elements in the second array....\n";
	 cin>>arr2[i];
}
m=n1+n2;
for(i=0;i<n1;i++){
	arr3[index]=arr1[i];
	index++;
}
	for(i=0;i<n2;i++){
	arr3[index]=arr2[i];
	index++;
}
	cout<<"final merged array is.....\n";
	for(i=0;i<m;i++){
		cout<<arr3[i];
	}
	
	
	
	
	
	
	
	return 0;
	
}
