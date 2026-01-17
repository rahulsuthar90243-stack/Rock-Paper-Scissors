#include "game.h"

int main(){
    int choice;
    printf("\n\n--Welcome Rock Paper Scissors\n");
    print_menu();

    while (1)
    {
        switch (choice)
        {
            printf("\nPlease, enter oprion: ");
            scanf("%d", &choice);
        case 1:
            break;

        case 0:
            return 0;

        default:
                printf("Invalide choice!!!");
        }
    }
}