#include <math.h>
#include <stdio.h>
int main()
{
  int a,b,c,P,S;
  printf("nhap cac canh cua tam giac\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if (a<b+c && b<a+c && c<a+b){
  	P=a+b+c;
  	S=sqrt(P*(P-a)*(P-b)*(P-c));
  	printf("chu vi cua tam giac: %d",P);
  	printf("\ndien tich cua tam giac: %d",S);
  }else{
  	printf("khong phai cac canh tam giac");
  }
return 0;
}
