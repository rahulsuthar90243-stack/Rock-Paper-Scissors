#include "game.h"

int main(){
    int choice;
    printf("--Welcome Rock Paper Scissors");
    printf("Please, enter oprion: ");
    scanf("%d", &choice);

    switch (choice){
    case 1:
        break;

    case 0:
        return 0;    
    
    default: if(choice < 0 && choice > 1){
        printf("Invalide choice!!!");
    }
        break;
    }

}