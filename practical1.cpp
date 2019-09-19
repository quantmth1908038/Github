#include<stdio.h>

int main(){
	int n;
	int s=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for (;n>0;){
		s=s+n%10;
		n/=10;
	}
	
	printf("Total digits: %d",s);
	return 0;
}
