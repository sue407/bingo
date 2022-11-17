#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int get_number(void){
}

int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
	printf("======================================================================\n");
	printf("                 I       G                A       E                   \n");
	printf("             B       N       O       G        M        !              \n");
	printf("======================================================================\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");

    //GMAE
    
    bingo_init();
    bingo_print();
    bingo_inputNum(21);
    bingo_print();
	

    //initialize bingo boards
    /*
	while(game is not end) 줄 수가 N음_BINGO보다 작
	{
	
	//bingo board printing
	
	//print no. of completed lines
	
	//select a proper number
	
	//put the number on the board
	 
	}
    */




    //ENDING

    printf("\n\n\n\n\n\n\n\n\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
	printf("======================================================================\n");
	printf("                !!! C O N G R A T U L A T I O N !!!                   \n");
	printf("                       !!! Y O U   W I N !!!                          \n");
	printf("======================================================================\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");

	return 0;
}
