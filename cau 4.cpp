#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float D,x1,x2,r;
	printf("nhap cac so nguyen a,b,c\n");
	scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
	if (a!=0){
	D = b*b-4*a*c;
	if (D<0 && D!=0){
		printf("phuong trinh vo nghiem");
	}else if (D>0 && D!=0){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		printf("phuong trinh co 2 nghiem\n x1=%f\n x2=%f",x1,x2);
	}
	else {
		x1=(float)-b/(2*a);
		printf("phuong trinh co nghiem kep x1=x2=%f",x1);
	}
}
else{x1=(float)-c/b;
    printf("phuong trinh co nghiem x=%f",x1);
}
	return 0;
}
