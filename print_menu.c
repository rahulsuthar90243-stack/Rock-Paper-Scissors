#include "game.h"


void print_menu(){
    printf("%s\n ---------------------------%s", CYAN, COLOR_END);
    printf("%s\n|    ROCK PAPER SCISSORS    |%s", CYAN, COLOR_END);
    printf("%s\n ---------------------------%s", CYAN, COLOR_END);
    printf("%s\n[1]. Play Game%s", YELLOW, COLOR_END);
    printf("%s\n[0]. Exit Game%s", YELLOW, COLOR_END);
}