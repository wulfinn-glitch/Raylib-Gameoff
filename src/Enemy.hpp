//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_BOSS_HPP
#define RAYLIBGAMEOFF_BOSS_HPP
#include "EnemyBase.hpp"
#include "raylib-cpp.hpp"

struct TentacleEnd {
    raylib::Vector2 position;
    raylib::Vector2 velocity;
    float speed = 450.0f;
    raylib::Vector2 acceleration;
    raylib::Color color;
};

class Enemy : public EnemyBase {


public:
    void* gameref;
    std::string name = "BaseEnemy";
    Enemy(float x, float y, void* g);
    void Update() override;

    void ShootPlayer();

    void Draw() override;
    void DebugDraw() override;

private:
    raylib::Vector2 position;
    raylib::Vector2 velocity;

    float radius = 40.0;
    float tentacleRadius = 10.0;

    raylib::Color color = LIGHTGRAY;

    std::vector<TentacleEnd> tentacles;

};

#endif //RAYLIBGAMEOFF_BOSS_HPP
