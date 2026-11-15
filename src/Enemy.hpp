//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_BOSS_HPP
#define RAYLIBGAMEOFF_BOSS_HPP
#include "EnemyBase.hpp"
#include "raylib-cpp.hpp"

class Enemy : public EnemyBase {

public:
    std::string name = "BaseEnemy";
    Enemy(float x, float y);
    void Update() override;

    void Draw() override;
    void DebugDraw() override;

private:
    raylib::Vector2 position;
    raylib::Vector2 velocity;

    float radius = 40.0;
    float tentacleRadius = 5.0;

    raylib::Color color = LIGHTGRAY;

};

#endif //RAYLIBGAMEOFF_BOSS_HPP
