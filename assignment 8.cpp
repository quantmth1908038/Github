#include <stdio.h>

bool kiem_tra_so(int ary[],int x,int n){
	for (int i=0;i<x;i++){
		if(ary[i]==n){
			return true;
		}
	}return false;
}

void so_le(int ary[],int x){
	for(int i=0;i<x;i++){
		if(ary[i]%2==1){
			printf("so le: %d\n",ary[i]);
		}
	}
}

int fibonacci(int n){
	int x=1,y=0;
	int z=0;
	for(int i=0;i<n;i++){
		z=x+y;
		x=y;
		y=z;
	}return z;
}

int main(){
	   //1.kiem tra so trong mang
	int a[10]={3,23,31,48,7,5,45,76,97,10};
	int x;
	printf("nhap so can kiem tra: ");
	scanf("%d",&x);
	if (kiem_tra_so(a,10,x)){
		printf("co trong mang\n");
	}else{
		printf("k co trong mang\n");
	}
	   //2.in so le trong mang
	so_le(a,10);
	   //3.tim so thu n trong day fibonacci
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	printf("so thu %d trong day fibonacci: %d\n",n,fibonacci(n));
}
