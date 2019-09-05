#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 thu trong tuan ");
	scanf("%d",&n);
	while(n<2 || n>7){
		printf("nhap lai ");
		scanf("%d",&n);
	}
	printf("thu %d",n);
	return 0;
}
	
