#ifndef PLAYER_HEADER
#define PLAYER_HEADER
#include "raylib.h"
#include <stdbool.h>

struct Player{
    Vector2 position;
    bool is_alive;
    bool power_up;
    bool can_it_jump;
    float gravity;
    float player_jump_speed;
    int player_horizontal_speed;
    int player_lives;
    Texture2D player_texture;
};


#endif