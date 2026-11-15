//
// Created by kshitij on 11/15/26.
//

#include "Enemy.hpp"

Enemy::Enemy(float x, float y) {
    position.x = x;
    position.y = y;
}

void Enemy::Update() {
}

void Enemy::Draw() {
    DrawCircle(position.x, position.y, radius, color);
}

void Enemy::DebugDraw() {
}
