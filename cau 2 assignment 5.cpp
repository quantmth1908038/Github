#include <stdio.h>

int main(){
	int n;
	printf("1.cafe\n");
	printf("2.sinh to\n");
	printf("3.nuoc ep\n");
	do{
	printf("nhap mon trong menu: ");
	scanf("%d",&n);
	if (n==1)
	printf("1.cafe");
	if (n==2)
	printf("2.sinh to");
	if (n==3)
	printf("3.nuoc ep");
}
	while(n<1 || n>3);
	return 0;
}
	
