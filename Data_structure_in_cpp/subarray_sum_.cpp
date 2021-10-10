#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[10],n,sum;
cin>>n;
for(int i=0;i<n;i++){
	cout<<"enter the elements";
	cin>>arr[i];
}
cout<<"enter the sum";
cin>>sum;
for(int i=0;i<n-1;i++){
	sum=arr[i];
for(int j=i+1;j<n;j++){
	sum+=arr[j];
	if(sum==sum){
		cout<<i<<" and" <<j;
		break;
	}
}


}

 return 0;
}
