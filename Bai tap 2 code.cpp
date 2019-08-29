#include <stdio.h>

int main(){
	float x,y;
	printf("nhap so tien gui ");
	scanf("%f",&x);
	y=x*8/100;
	x=x+y;
	
	y=x*8/100;
	x=x+y;
	
	y=x*8/100;
	x=x+y;
	
	y=x*8/100;
	x=x+y;
	
	printf("tong tien sau 4 nam la %f",x);
	return 0;
	}
