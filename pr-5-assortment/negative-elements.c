#include<stdio.h>

int main(){
	int n;
	printf("Enter array's size:-  ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++){
		printf("Enter array's Elements:- ");
		scanf("%d",&array[i]);
	}
	printf("Negative Elements are: ");
	for(int i=0;i<n;i++){
		if(array[i]<0){
			printf("%d",array[i]);
		}
	}
}