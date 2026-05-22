#include<stdio.h>
#include<string.h>
int main(){

    char str[11];
    int length=0;
    printf("Enter any string :- ");
    scanf("%s",&str);
    
    while(str[length] !='\0'){
    	length++;
	}
	//reverse string
	int n=0;
	char rev[11];
	for(int i=length-1;i>=0;i--){
		rev[n]=str[i];
		n++;
	}
	
	int track=0;
	for(int i=0;i<length;i++){
		if(str[i]!=rev[i]){
			track++;
		}
	}

	if(track==0){
		printf("The given string is palindrome");
	}else{
		printf("The given string is not palindrome");
	}
}