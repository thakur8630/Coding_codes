#include<stdio.h>
int main(){
	int people,amt,money[people];
	printf("enter the number of people and atm amount.....");
	scanf("%d%d",&people,&amt);
	for(int i=0;i<people;i++){
		printf("enter the amount of people");
		scanf("%d",&money[i]);
		
		
	}
	
	for(int i=0;i<people;i++){
		
		if(amt>=money[i]){
			amt=amt-money[i];
			printf("1");
		}
		else{
			printf("0");
		}
	}
	
	return 0;
}
