#include <stdio.h>

int main(){
	int n,t;
	printf("nhap so n: ");
	scanf("%d",&n);
	t=0;
	for(int i=n;i>0;i/=10){
		t++;}
   printf("so %d co %d chu so",n,t);
  return 0;
}
