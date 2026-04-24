#include<stdio.h>

int main(){
	for(int i=5;i>=1;i--){
		for(int s=1;s<i;s++){
			printf(" ");
		}
		for(int k=i;k<=5;k++){
			printf("%d",k);
		}
		printf("\n");
	}
}