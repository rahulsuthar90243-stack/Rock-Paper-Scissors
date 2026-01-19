#include "game.h"


int winer_check(int user, int comp){
 
    if(user == comp){
        printf("\n\nResult: it's Draw");
        game_draw++;
    }else if(user == Rock && comp == Scissors || user == Paper && comp == Rock || user == Scissors && comp == Paper){
        printf("\n\nResult: You Win");
        user_score++;
    }else{
        printf("\n\nResult: You Loss");
        comp_score++;
    }
}