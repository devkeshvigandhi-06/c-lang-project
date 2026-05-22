#include<stdio.h>

void arr(){
	int n,m;
	printf("Enter row size: ");
	scanf("%d",&n);
	printf("Enter column size: ");
	scanf("%d",&m);
	int arr[n][m];
	 for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("Enter Array Element: ");
				scanf("%d",&arr[i][j]);
			}
		printf("\n");
	}
	int *ptr;
	ptr= &arr;
	
	cube(ptr,n,m);
		
}
		
	void cube(int *p,int n,int m){
		int ans;
		for(int i=0;i<n*m;i++){
				ans=*p * *p * *p;
				printf("%d\t",ans);
				p++;
			}
		}

int main(){

   arr();
		
	
	return 0;
}