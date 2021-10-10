#include<iostream>
using namespace std;
void solve(int people,int atm_amt,int money[]){
	
	for(int i=0;i<people;i++){
		
		if(atm_amt>=money[i]){
			atm_amt=atm_amt-money[i];
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		
		int people,atm_amt,money[people];
		cin>>people>>atm_amt;
		for(int i=0;i<people;i++){
			cin>>money[i];
		}
		solve(people,atm_amt,money);
		cout<<endl;
	}
	return 0;
	
}
