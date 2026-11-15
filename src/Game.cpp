//
// Created by kshitij on 11/15/26.
//

#include "Game.hpp"

Game::Game() :
    window(screenWidth, screenHeight, "Game"),
    player(screenWidth/2, screenHeight-50),
    enemy(screenWidth/2, 100.0)
{
    SetConfigFlags(FLAG_MSAA_4X_HINT);

    SetTargetFPS(60);
    rlImGuiSetup(true);
}

void Game::Update() {
    player.Update(GetFrameTime());
}

void Game::Draw() {
    window.ClearBackground(BLACK);
    DrawFPS(5, 5);

    player.Draw();
    enemy.Draw();
}

void Game::DebugDraw() {
    // Draw debug stuff
    player.DebugDraw();
}
