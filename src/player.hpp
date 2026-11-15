//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_PLAYER_HPP
#define RAYLIBGAMEOFF_PLAYER_HPP
#include "Enemy.hpp"
#include "raylib-cpp.hpp"

class Player {
public:
    Player(float x, float y);
    raylib::Vector2 GetPosition();

    void DetectInputs();
    void AttackTentacle(raylib::Vector2 pos, float hitboxRadius);
    void Update(float dt);
    void Move(raylib::Vector2 direction);

    void Draw();
    void DebugDraw();

    void LockOn(std::vector<Enemy> enemies);
    Enemy* DetectNearestEnemy(std::vector<Enemy> enemies);

    // Later
    void ShiftLeft();
    void ShiftRight();

private:
    float radius = 20.0;
    float speed = 350.0;
    raylib::Vector2 position;
    raylib::Vector2 velocity;
    raylib::Color color;

    // Combat
    float attackRange_l = 40.0 - 10.0;
    float attackRange_h = 40.0 + 5.0;

    raylib::Vector2 direction{0, 0};
};

#endif //RAYLIBGAMEOFF_PLAYER_HPP
