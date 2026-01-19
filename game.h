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

const char* COLOR_END = "\033[0m";
const char* RED ="\033[1;31m"; 
const char* GREEN ="\033[1;32m";
const char* YELLOW ="\033[1;33m"; 
const char* MAGENTA = "\033[0;35m"; 
const char* CYAN = "\033[0;36m"; 

void print_menu();
int get_user_choice();
int get_comp_choice();
int show_choice(int choice);
int winer_check(int user, int comp);

#endif