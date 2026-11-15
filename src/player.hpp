//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_PLAYER_HPP
#define RAYLIBGAMEOFF_PLAYER_HPP
#include "raylib-cpp.hpp"

class Player {
public:
    Player(float x, float y);
    raylib::Vector2 GetPosition();

    void Update(float dt);
    void Move(raylib::Vector2 direction);

    void Draw();
    void DebugDraw();

    // Later
    void ShiftLeft();
    void ShiftRight();
    void LockOn();

private:
    float radius = 10.0;
    float speed = 350.0;
    raylib::Vector2 position;
    raylib::Vector2 velocity;
    raylib::Color color;
};

#endif //RAYLIBGAMEOFF_PLAYER_HPP
