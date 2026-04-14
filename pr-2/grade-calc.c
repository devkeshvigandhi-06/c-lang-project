#include<stdio.h>

int main(){
	//step-1
	int marks;
	char grade = 'F';
	printf("Enter the marks :- ");
	scanf("%d",&marks);
	
	  
	  if(marks>100){
	  	printf("invalid number");
	  }
	  else{
	  	(marks>=90)?
	         grade='A'
	 :
	 	(marks>=80) ? grade='B' : (marks>=70) ? grade='C' : (marks>=60) ? grade='D' : grade ;
	 	printf("your grade is %c\n",grade);
	 	
	 	//step-2
	  
	  switch(grade){
	  
	    case 'A':
	       printf("Excellent work!");
	       break;
	       
	    case 'B':
	       printf("Well Done");
	       break;
	       
	    case 'C':
	       printf("Good job");
	       break;
	       
	    case 'D':
	       printf("You passed but you could do better");
	       break;
	    default:
	       printf("Sorry,You failed");
	       break;
	   }
    
    
    //step-3
    
    if(grade!='F'){
    	printf("\nCongratulations! You are eligible for next level");
    	
	}
	else{
		printf("\nPlease try again next time");
		
	}
	 	
	 	
	  }
	  
	  
}