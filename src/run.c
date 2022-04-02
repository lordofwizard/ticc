#include <stdio.h>
#include "board.h"

void run(){
        
}
void greet(){
        clear();
        printf("Hello there!\n");
        printf("Welcome to the wonderful tictactoe game created by \n -LordOfWizard and Atharwa WaghChoure\n");
        printf("This game is run via some basic commands. For total documentation follow following link\n");
        printf("https://github.com/lordofwizard/ticc");
}


void clear(void)
{
        #ifdef _WIN32
        system("cls");
        #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
        system("clear");
//add some other OSes here if needed
        #else
        #error "OS not supported."
    //you can also throw an exception indicating the function can't be used
        #endif
}
void help(){
There are only 4 Basic commands to play this game
help :- help command prints this help message

}
void p(const char * message){
        printf("%s\n",message);
}
