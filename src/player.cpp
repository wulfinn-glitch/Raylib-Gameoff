//
// Created by kshitij on 11/15/26.
//

#include "player.hpp"
#include "ColliderDebug.hpp"

Player::Player(float x, float y) {
    position.x = x;
    position.y = y;
}

raylib::Vector2 Player::GetPosition() {
    return position;
}

void Player::Update(float deltaTime) {

    raylib::Vector2 direction{0, 0};
    if (IsKeyDown(KEY_A)) direction.x -= 1;
    if (IsKeyDown(KEY_D)) direction.x += 1;
    if (IsKeyDown(KEY_W)) direction.y -= 1;
    if (IsKeyDown(KEY_S)) direction.y += 1;

    direction = direction.Normalize();
    Move(direction);

    position += velocity * deltaTime;
}

void Player::Move(raylib::Vector2 direction) {
    velocity.x = speed * direction.x;
    velocity.y = speed * direction.y;
}

void Player::Draw() {
    DrawCircle(position.x, position.y, radius, RAYWHITE);
}

void Player::DebugDraw() {
    DrawHitBoxCircle(position.x, position.y, radius);
}
