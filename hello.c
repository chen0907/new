#include <stdio.h>


int main(void)
{
	int num;
	printf("Enter a number(0 or 1): ");
	num = getchar();
	printf("You entered a magic number\n");
    if (num==48)
    {
        printf("GAME");
        num = 49;
    }
    if(num==49){
        printf("OVER\n");
        return 0;
    }
    return 0;
}

