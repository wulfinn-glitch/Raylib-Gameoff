//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_GAME_HPP
#define RAYLIBGAMEOFF_GAME_HPP
#include "Enemy.hpp"
#include "raylib-cpp.hpp"

#include "globals.hpp"
#include "player.hpp"
#include "imgui.h"
#include "rlImGui.h"


class Game {
public:
    raylib::Window window;
    bool debugDraw = false;

    Game();
    void Update();
    void Draw();
    void DebugDraw();

    Player player;
    Enemy enemy;
};

#endif //RAYLIBGAMEOFF_GAME_HPP
