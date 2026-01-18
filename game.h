#ifndef GAME_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Rock 1
#define Paper 2
#define Scissors 3

void print_menu();
int get_user_choice();
int get_comp_choice();
int show_choice(int choice);
int winer_check(int user, int comp);

#endif