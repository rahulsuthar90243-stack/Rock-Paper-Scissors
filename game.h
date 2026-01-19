#ifndef GAME_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Rock 1
#define Paper 2
#define Scissors 3

extern int user_score;
extern int comp_score;
extern int game_draw;

extern const char* COLOR_END;
extern const char* RED;
extern const char* GREEN;
extern const char* YELLOW;
extern const char* CYAN;
extern const char* MAGENTA;

void print_menu();
int get_user_choice();
int get_comp_choice();
int show_choice(int choice);
int winer_check(int user, int comp);

#endif