#include<stdio.h>
int main(){
	int i,j,arr[10],n;
	printf("enter the range of array...");
	scanf("%d",&n);
	printf("enter the number in the array.......");
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	
	}
	printf("this is your array...... ");
	for(i=0;i<n;i++){
	

		printf("%d",arr[i]);
	
}
printf("the reverse array is this.....");
for(j=n;j>=i;j--);{
	printf("%d",arr[i]);
}
	
	
	return 0;
}
