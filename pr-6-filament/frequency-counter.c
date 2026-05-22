#include<stdio.h>
#include<string.h>

int main(){
	char str[10]; //hello
	int f[256]={0}; //0-0,1-0,2-0
	printf("Enter a word:- ");
	scanf("%s",&str);
	
	for(int i=0;str[i]!='\0';i++){
		f[str[i]]++;
	}
	
	for(int i=0;i<256;i++){
		if(f[i] !=0){
			printf("%c->%d\n",i,f[i]);
		}
	}
}