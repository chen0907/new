#include <stdio.h>


int main(void){
	int num;
	printf("Enter a number(0 or 1): ");
	num = getchar();
	if(num < 48 || num >49){
		return 0;
	}
	else{
   	 	if (num==48)
   	 	{
       		 printf("GAME");
       	 	num = 49;
  	  }
    	if(num==49){
       	 printf("OVER\n");
       	 return 0;
  	  }
    }
}

