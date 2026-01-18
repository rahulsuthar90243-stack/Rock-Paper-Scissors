#include "game.h"

int get_user_choice(){
    int choice;
    do{
      printf("\n\nSelect Your Choice");
      printf("\n[1]. Rock \n[2].Paper \n[3]. Scissors");
      printf("\nEnter Choice: ");
      scanf("%d", &choice);
      if(choice < 1 || choice > 3){
        printf("\nInvalid choice please, enter (1, 2 or 3)");
      }
    } while (choice < 1 || choice > 3);
 
    return choice;
}