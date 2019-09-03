#include <stdio.h>

int main(){
	int x,y,z;
	printf("nhap gia tri x ");scanf("%d",&x);
	printf("nhap gia tri y ");scanf("%d",&y);
	 z=x;
	 x=y;
	 y=z;
	printf("gia tri x: %d\n",x);
	printf("gia tri y: %d",y);
	
	return 0;
}
