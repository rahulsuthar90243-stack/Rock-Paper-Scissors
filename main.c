#include "game.h"

int main(){
    int play = 1;
    srand(time(NULL));

    print_menu();
    int option;
    printf("\n\nPlease Press Option: ");
    scanf("%d", &option);

    if (option == 1){

        printf("\n====Welcome to Rock Paper Scissors====");
        printf("\n---------------------------------------");
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

        }else{
            printf("\nInvalid option! Please press (1 or 0)");
        }
        printf("\n\nDo you want to play again ? (1 = Yes, 0 = NO): ");
        scanf("%d", &play);
        if(play == 0){
        printf("\nthank you for playing game.");
        printf("\n ---------------------------");
        printf("\n|    Developed by RAHUL    |");
        printf("\n ---------------------------");
    }
}
}