#include "make_move.h"


void make_move(const char* json, const char* my_role_ab) {
    char piece[32], target[32], my_color[10], opp_color[10];
    get_role_color(json, my_role_ab, my_color);
    strcpy(opp_color, strcmp(my_color, "Red") == 0 ? "Black" : "Red");
    
}