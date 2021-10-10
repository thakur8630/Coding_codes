#include<iostream>
using namespace std;
int main(){
      
      int arr[10][10],i,j;
      cout<<"enter the elements..";
      for(i=0;i<2;i++)
      {
      	for(j=0;j<2;j++){
      		cin>>arr[i][j];
		  }
	  }
	  cout<<"the elements of array is ....";
	  for(i=0;i<2;i++){
	  	for(j=0;j<2;j++){
	  		cout<<arr[i][j];
		  }
		  cout<<"\n";
	  }
      
      
      
      
      
      
	return 0;
	
}
