//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_TENTACLE_HPP
#define RAYLIBGAMEOFF_TENTACLE_HPP
#include "raylib-cpp.hpp"

struct Tentacle {
    raylib::Vector2 position;
    raylib::Vector2 velocity;
    float speed = 450.0f;
    raylib::Vector2 acceleration;
    raylib::Color color;
    void* player;

    void DetectPlayer();
};

#endif //RAYLIBGAMEOFF_TENTACLE_HPP
