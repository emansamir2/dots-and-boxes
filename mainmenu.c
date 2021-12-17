
#include <stdio.h>


int main() {

   //main menu
   printf("Enter 0 to start\n");
   printf("Enter 1 to load a game\n");
   printf("Enter 2 to view  Top 10 players\n");
   printf("Enter 3 to exit\n");
   int x;
   scanOfx:
   scanf("%i",&x);

   switch(x){

       case 0:scanLevel:
              printf("Enter 0 for beginner\n");
              printf("Enter 1 for expert\n");
              int level;
              scanf("%i",&level);
              if(level!=0 && level!=1){
                  printf("invalid number.Please, enter another number\n");
                  goto scanLevel;
              }

              scanNOP:
              printf("Enter 0 for playing aginst the computer\n");
              printf("Enter 1 for 2 players\n");
              int numOfPlayers;
              scanf("%i",&numOfPlayers);
              if(numOfPlayers!=0 && numOfPlayers!=1){
                  printf("invalid number.Please, enter another number\n");
                  goto scanNOP;
              }

               break;

      /* case 1:

       case 2:*/

       case 3: printf("bye");
               return 0;

       default:
       printf("invalid number.Please enter another number\n");
       goto scanOfx;
   }

    return 0;

}
