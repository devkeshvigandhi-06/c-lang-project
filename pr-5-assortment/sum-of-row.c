#include<stdio.h>

int main(){
	int n,m,row,col,sum=0,sum2=0;
	printf("Enter row size of array:- ");
	scanf("%d",&n);
	printf("Enter column size of array:- ");
	scanf("%d",&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter array elements:- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	//sum for row
	printf("Enter row number:- ");
	scanf("%d",&row);
	if(row<n){
		printf("Element of row %d :- ",row);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==row){
					printf("%d ",arr[i][j]);
				}
			}
		}
		printf("\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==row){
					sum+=arr[i][j];
				}	
			}
		}
		printf("sum of row %d : %d",row ,sum);
   }
	else{
		printf("invalid row number ");
	}	
		
	//sum for column
	printf("\n");
	printf("Enter column number:- ");
	scanf("%d",&col);
	if(col<m){
		printf("Element of column %d :- ",col);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==col){
					printf("%d ",arr[i][j]);
				}
			}
		}
		printf("\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==col){
					sum2+=arr[i][j];
				}	
			}
		}
		printf("sum of col %d : %d",col ,sum2);
   }
	else{
		printf("invalid column number ");
		}	
}