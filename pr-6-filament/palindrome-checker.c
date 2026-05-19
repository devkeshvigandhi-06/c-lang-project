#include<stdio.h>

int main(){

    char str[11];
    int i,length=0,palindrome=1;
    printf("Enter any string :- ");
    scanf("%s",&str);
    
    while(str[length!='\0']){
    	length++;
	}
	for(int i=0;i<length/2;i++){
		if(str[i]!=str[length-1-i]){
			palindrome=0;
		}
	}
	if(palindrome==1){
		printf("The given string is palindrome");
	}else{
		printf("The given string is not palindrome");
	}
}