#include<stdio.h>
int leap_year();
int main(){
	leap_year();
	
	return 0;
}
int leap_year(){
	int year;
	printf("enter the year to check the leap year : \t");
	scanf("%d",year);
	if(year%400==0 || year%4==0 || year%100==0){
		printf("yes, this is the leap year.....");
	}
	else{
		printf("this is not leap year...");
	}
	
}
