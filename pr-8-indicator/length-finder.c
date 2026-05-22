#include<stdio.h>

int main(){
	char str[10];
	printf("Enter any String: ");
	scanf("%s",&str);
	char *ptr;
    ptr=&str;
	int count=0;
	
	while(*ptr!='\0'){
	  count++;
	  ptr++;
	}
	printf("%d",count);
}