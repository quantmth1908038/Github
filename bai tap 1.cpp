#include <stdio.h>

int main(){
	int A,B,C;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	if(A>=B){ if(A>=C){
	printf("%d la so lon nhat.",A);
	if(B>=C){
	printf("%d la so nho nhat.",C);	
	}else{
	printf("%d la so nho nhat.",B);	
	}}else{
	printf("%d la so lon nhat.",C);
	printf("%d la so nho nhat.",B);
	}}else{
    if (B>=C){
	printf("%d la so lon nhat.",B);
    if(A>=C){
	printf("%d la so nho nhat.",C);	
	}else{
	printf("%d la so nho nhat.",A);
	}}else{
    printf("%d la so lon nhat.",C);
    printf("%d la so nho nhat.",A);
}}
return 0;}
