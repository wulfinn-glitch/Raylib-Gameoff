//
// Created by kshitij on 11/15/26.
//

#include "player.hpp"
#include "ColliderDebug.hpp"
#include "imgui.h"

Player::Player(float x, float y) {
    position.x = x;
    position.y = y;
}

raylib::Vector2 Player::GetPosition() {
    return position;
}

void Player::DetectInputs() {
    if (IsKeyDown(KEY_A)) direction.x -= 1;
    if (IsKeyDown(KEY_D)) direction.x += 1;
    if (IsKeyDown(KEY_W)) direction.y -= 1;
    if (IsKeyDown(KEY_S)) direction.y += 1;

    direction = direction.Normalize();

    if (IsKeyPressed(KEY_E)) {
        std::printf("Hello");
    }
}

void Player::Update(const float dt) {
    direction = raylib::Vector2(0, 0);
    DetectInputs();
    Move(direction);

    position += velocity * dt;
}

void Player::Move(raylib::Vector2 direction) {
    velocity.x = speed * direction.x;
    velocity.y = speed * direction.y;
}

void Player::Draw() {
    DrawCircle(position.x, position.y, radius, RAYWHITE);
}

void Player::DebugDraw() {
    if (ImGui::CollapsingHeader("Player Settings", ImGuiTreeNodeFlags_DefaultOpen)) {
        ImGui::SliderFloat("Radius", &radius, 10.0f, 100.0f);
        attackRange_l = std::max(attackRange_l, radius + 5.0f);
        ImGui::SliderFloat("Attacker Radius L", &attackRange_l, radius + 5.0f, 200.0);
        attackRange_h = std::max(attackRange_h, attackRange_l + 5.0f);
        ImGui::SliderFloat("Attacker Radius R", &attackRange_h, attackRange_l + 5.0f, 200.0);
    }

    // Draw attack range
    DrawRangeCircle(position.x, position.y, attackRange_l);
    DrawRangeCircle(position.x, position.y, attackRange_h);

    // Draw hitbox
    DrawHitBoxCircle(position.x, position.y, radius);
}

void Player::LockOn(std::vector<Enemy> enemies) {
    Enemy *enemy = DetectNearestEnemy(enemies);
    std::printf("Locked on to: %s", enemy->name.c_str());
}

Enemy * Player::DetectNearestEnemy(std::vector<Enemy> enemies) {
    return nullptr;
}

