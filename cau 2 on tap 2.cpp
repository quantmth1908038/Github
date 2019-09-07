#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong 1 mang: ");
	scanf("%d",&n);
	int ary[n];
  for(int i=0;i<n;i++){
  	printf("%d.",i);
scanf("%d",&ary[i]);
}
  for(int i=0;i<n;i++){
  	if(ary[i]%2==1){
  		printf("so le: %d\n",ary[i]);
	  }
  }
return 0;
}
