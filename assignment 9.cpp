#include <stdio.h>
#include <string.h>

int main (){
	int n;
	printf("nhap so chuoi: ");
	scanf("%d",&n);
	char str[n][20];
	for (int i=0;i<n;i++){
		printf("nhap chuoi %d: ",i);
		scanf("%s",str[i]);
	}
	char str1[20];
	printf("nhap chuoi kiem tra: ");
	scanf("%s",str1);
	for (int i=0;i<n;i++){
		if (strcmp(str[i],str1)==0){
			printf("co trong mang \n");
			return 1;
		}
	}
		    printf("khong co trong mang \n");

	return 0;
}
