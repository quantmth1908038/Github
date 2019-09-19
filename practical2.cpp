#include <stdio.h>
#include <string.h>

void lowercase(char s[]){
	for (int i=0;i<strlen(s);i++){
		if (s[i]>64 && s[i]<91){
		s[i]+=32;
	  }
	}
	printf("Upper Case: %s",s);
}

int main(){
	char s[50];
	printf("Enter string: ");
	scanf("%s",s);
	lowercase(s);
	return 0;
}
