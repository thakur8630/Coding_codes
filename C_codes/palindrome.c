#include<stdio.h>
int main(){
	int num;
	printf("ente the number to check the palindrome : ");
	scanf("%d",num);
	int n=num;
	int rev=0;
	while(num>0){
		int R=num%10;
		 rev=rev*10+R;
		num=num/10;
}
	if(n==rev){
		printf("this is the palindrome number.....");
	}
	else{
		printf("this is not palindrome number.......");
	}
}

