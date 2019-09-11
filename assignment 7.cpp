#include <stdio.h>
int main(){
	int i,n,m,t=0;
  do{
	printf("1.Chon mon an\n2.Goi do uong\n3.Thanh toan\n4.Thoat chuong trinh\n");
	scanf("%d",&i);
	while (i<1 || i>4){
		printf("chon lai ");
		scanf("%d",&i);
		}
	if (i==1){
		 printf("1.Com ga\n2.Pho\n3.Bun\n4.Quay lai\n");
		 scanf("%d",&n);
		while(n<1 || n>4){
			printf("chon lai ");
		    scanf("%d",&n);
		}
		if (n==1 || n==2 || n==3){
			printf(" Cam on\n\n");
		}
		}
	if (i==2){
		 printf("1.Nuoc ngot\n2.Bia\n3.Ruou\n4.Quay lai\n");
		 scanf("%d",&m);
		while(m<1 || m>4){
			printf("chon lai ");
		    scanf("%d",&m);
		}
		if (m==1 || m==2 || m==3){
			printf(" Cam on\n\n");
			}
		}	
	if (i==3){
		printf("So tien can tra la 50.000d\n Cam on\n\n");
	}
	if (i==4){
	t=1;
	}
	}
	while (t==0);
	return 0;
}
