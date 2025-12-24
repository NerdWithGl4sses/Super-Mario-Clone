#include "player.h"
#include "raylib.h"
#include <stdio.h>


void InitPlayer(struct Player *player){
    player->can_it_jump = true;
    player->is_alive = true;
    player->power_up = false;
    player->gravity = 400.0f;
    player->player_horizontal_speed = 200;
    player->player_jump_speed = 350.0f;
    player->player_lives = 3;
    player->position = (Vector2){100, 300};
    player->player_texture = LoadTexture("C:/raylib/raylib/projects/SuperMarioClone/player_texture.png");
}

void UpdatePlayer(struct Player *player, float delta){
    if (IsKeyDown(KEY_A)) player->position.x -= player->player_horizontal_speed*delta;
    if (IsKeyDown(KEY_D)) player->position.x += player->player_horizontal_speed*delta;
}
