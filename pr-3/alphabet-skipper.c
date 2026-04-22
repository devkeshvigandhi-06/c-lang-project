#include<stdio.h>

int main(){
	
	char alpha='a';
	do{
		printf("%c\n",alpha);
		alpha+=4;
	}
	while(alpha<='z');
}
