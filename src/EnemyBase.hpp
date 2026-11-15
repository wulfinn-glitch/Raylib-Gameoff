//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_ENEMY_HPP
#define RAYLIBGAMEOFF_ENEMY_HPP
#include "raylib-cpp.hpp"

class EnemyBase {
public:
    virtual ~EnemyBase() = default;

private:
    virtual void Update() = 0;
    virtual void Draw() = 0;
    virtual void DebugDraw() = 0;
};

#endif //RAYLIBGAMEOFF_ENEMY_HPP
