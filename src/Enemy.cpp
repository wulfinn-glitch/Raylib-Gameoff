//
// Created by kshitij on 11/15/26.
//

#include "Enemy.hpp"

#include "Game.hpp"

Enemy::Enemy(float x, float y, void* g) {
    gameref = g;
    position.x = x;
    position.y = y;
}

void Enemy::Update() {
    if (IsKeyPressed(KEY_SPACE)) {
        ShootPlayer();
    }

    for (int i = 0; i < tentacles.size(); i++) {
        tentacles[i].position += tentacles[i].velocity;
    }
}

void Enemy::ShootPlayer() {
    auto game = static_cast<Game *>(gameref);
    auto player_pos = game->player.GetPosition();
    auto dir = (player_pos - position).Normalize();

    TentacleEnd tentacleEnd;
    tentacleEnd.position = position;
    tentacleEnd.velocity = dir * tentacleEnd.speed * game->window.GetFrameTime();

    tentacles.push_back(tentacleEnd);
}

void Enemy::Draw() {
    DrawCircle(position.x, position.y, radius, color);
    for (auto tentacle : tentacles) {
        DrawCircle(tentacle.position.x, tentacle.position.y, tentacleRadius, BLUE);
    }
}

void Enemy::DebugDraw() {
}
