#include<stdio.h>

int sum(int x,int y){
	printf("sum of %d and %d : %d",x,y,x+y);
	return sum;
}
int sub(int x,int y){
	printf("sub of %d and %d: %d",x,y,x-y);
	return sub;
}
int mul(int x,int y){
	printf("mul of %d and %d : %d",x,y,x*y);
	return mul;
}
int div(int x,int y){
	printf("div of %d and %d : %d",x,y,x/y);
	return div;
}
int mod(int x,int y){
	printf("mod of %d and %d : %d",x,y,x%y);
	return mod;
}

int main(){
	
	int a,b,ans,choice;
	do{
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");
		printf("Press 0 for exit:- ");
		printf("\nEnter your choice:- ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Enter first number:- ");
				scanf("%d",&a);
				printf("Enter second number:- ");
				scanf("%d",&b);
				
				ans=sum(a,b);
				break;
				
				case 2:
				printf("Enter first number:- ");
				scanf("%d",&a);
				printf("Enter second number:- ");
				scanf("%d",&b);
				
				ans=sub(a,b);
				break;
				
				case 3:
				printf("Enter first number:- ");
				scanf("%d",&a);
				printf("Enter second number:- ");
				scanf("%d",&b);
				
				ans=mul(a,b);
				break;
				
				case 4:
				printf("Enter first number:- ");
				scanf("%d",&a);
				printf("Enter second number:- ");
				scanf("%d",&b);
				
				ans=div(a,b);
				break;
				
				case 5:
				printf("Enter first number:- ");
				scanf("%d",&a);
				printf("Enter second number:- ");
				scanf("%d",&b);
				
				ans=mod(a,b);
				break;
				
				default:
					printf("Invalid choice.");
					break;
		}printf("\n");
	}while(choice!=0);
	
	return 0;
}
