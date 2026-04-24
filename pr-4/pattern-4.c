#include<stdio.h>

int main(){
	for(int i=1;i<=5;i++){
		for(int s=1;s<i;s++){
			printf("  ");
		}
		for(int k=5;k>=i;k--){
			if(k%2==0){
				printf("0 ");
			}else{
				printf("1 ");
			}
		}
		printf("\n");
	}
}