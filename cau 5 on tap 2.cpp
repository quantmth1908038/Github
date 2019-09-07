#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong 1 mang: ");
	scanf("%d",&n);
  int ary[n];
  for (int i=0;i<n;i++){
  
    scanf("%d",&ary[i]);
}
  for (int i=0;i<n;i++){
  	  int x=0;
    for (int t=2;t<ary[i];t++){
      if (ary[i]%t==0){
      	x++;break;}
   	}
   	if (x==0){
   		printf("so ngto: %d\n",ary[i]);
	   }
}
return 0;
}
