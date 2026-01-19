#include "game.h"


int winer_check(int user, int comp){
 
    if(user == comp){
        printf("%s\n\nResult: it's Draw%s", MAGENTA, COLOR_END);
        game_draw++;
    }else if(user == Rock && comp == Scissors || user == Paper && comp == Rock || user == Scissors && comp == Paper){
        printf("%s\n\nResult: You Win%s", GREEN, COLOR_END);
        user_score++;
    }else{
        printf("%s\n\nResult: You Loss%s", RED, COLOR_END);
        comp_score++;
    }
}