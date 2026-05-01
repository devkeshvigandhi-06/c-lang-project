#include<stdio.h>

int main(){
	int n,m;
	printf("Enter array row size:- ");
	scanf("%d",&n);
	printf("Enter array column size:- ");
	scanf("%d",&m);
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter array elements:- ");
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	int max=array[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(array[0][0]<array[i][j]){
			max=array[i][j];
	     	}
		}
	}
	printf("the largest element is %d",max);
}