#include "game.h"



int user_score = 0;
int comp_score = 0;
int game_draw = 0;

int main(){
    int play = 1;
    srand(time(NULL));

    print_menu();
    int option;
    printf("\n\nPlease Press Option: ");
    scanf("%d", &option);

    if (option == 1){

        printf("%s\n====Welcome to Rock Paper Scissors====%s", CYAN, COLOR_END);
        printf("%s\n---------------------------------------%s",  CYAN, COLOR_END);
    }

    while(play){
        if(option == 0){
            printf("\nThank you for Playing.");
            break;
        }else if(option == 1){
            
            int user = get_user_choice();
            int comp = get_comp_choice();

            printf("\nYour Choice: ");
            show_choice(user);
            printf("\nComputer Choice: ");
            show_choice(comp);

            winer_check(user, comp);

            printf("\n\nYour Score: %d", user_score);
            printf("\nComputer Score: %d", comp_score);
            printf("\nGame Draw: %d", game_draw);


        }else{
            printf("%s\nInvalid option! Please press (1 or 0)%s",  CYAN, COLOR_END);
        }
        printf("%s\n\nDo you want to play again ? (1 = Yes, 0 = NO): %s", CYAN, COLOR_END);
        scanf("%d", &play);
        if(play == 0){
        printf("\nthank you for playing game.");
        printf("%s\n ---------------------------%s", CYAN, COLOR_END);
        printf("%s\n|    Developed by RAHUL    |%s", CYAN, COLOR_END);
        printf("%s\n ---------------------------%s", CYAN, COLOR_END);
    }
}
}