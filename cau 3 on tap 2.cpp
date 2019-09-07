#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){	
	 printf("*");
	 for (int j=0;j<i;j++){
	 printf("*");}
	 printf("\n");
}
	return 0;
}
