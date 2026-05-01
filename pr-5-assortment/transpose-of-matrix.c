#include<stdio.h>

int main(){
	int n;
	printf("Enter size of array:- ");
	scanf("%d",&n);
	int array[n][n];
	
	//insertion
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Enter array elements:- ");
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	int array2[n][n];
	
		//transpose
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
			array2[i][j]=array[j][i];
		}else{
			array2[j][i]=array[i][j];
	    	}
		}
	}

    //display
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",array2[j][i]);
		}
		printf("\n");
	}
}