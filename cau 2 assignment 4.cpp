#include <stdio.h>

int main(){
	int a,b,c;
    printf("nhap ba canh tam giac\n");
    scanf("%d%d%d",&a,&b,&c);
  while (a>=b+c || b>=a+c || c>=a+b){
  	printf("nhap lai ba canh tam giac\n");
    scanf("%d%d%d",&a,&b,&c);
  }
  printf("la ba canh cua tam giac");
return 0;
}
