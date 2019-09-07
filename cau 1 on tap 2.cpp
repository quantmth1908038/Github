#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong 1 mang: ");
	scanf("%d",&n);
	int S,a[n];
	for(int i=0;i<n;i++){
	printf("nhap so thu %d:",i);
	scanf("%d",&a[i]);
}
	for(int i=0;i<n;i++){
		S+=a[i];
		}
   printf("trung binh mang: %d",S/n);
  return 0;
}
