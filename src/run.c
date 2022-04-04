#include <stdio.h>
#include "board.h"
#include "run.h"

void run(){
        clear();
        greet();
        struct Board b;
        for(int i = 0; i < 3; i ++)for(int j = 0 ; j < 3 ; j++)b.board[i][j]=32;
        bool state = true;
        char command[100];
        while(state){
                printf("Please input command in the following prompt \n:- ");
                scanf("%s",&command);
               clear();
               if(compare(command,"exit")) state = false;
               if(compare(command,"help")) help();
 
        }
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
        p("There are only 4 Basic commands to play this game");
        p("help :- help command prints this help message");
        p("start :- to start the game");
        p("exit :- to exit the game");
        p("1* 2* :- to put a value (X or O) to specific position.. \n Note '*'s are not included.. put 2 space separated integers for position");
}

void p(const char * message){
        printf("%s\n",message);
}
int compare(char a[],char b[])  
{  
    int flag=0,i=0;  // integer variables declaration  
    while(a[i]!='\0' &&b[i]!='\0')  // while loop  
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 1;  
    else  
    return 0;  
}
