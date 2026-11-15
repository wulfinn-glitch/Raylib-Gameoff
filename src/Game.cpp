//
// Created by kshitij on 11/15/26.
//

#include "Game.hpp"

Game::Game() :
    window(screenWidth, screenHeight, "Game"),
    player(screenWidth/2, screenHeight-50)
{
    SetTargetFPS(60);
    rlImGuiSetup(true);

    enemies.push_back(new Enemy(screenWidth/2, 100.0, this));
}

void Game::Update() {
    player.Update(GetFrameTime());
    for (const auto enemy : enemies) {
        enemy->Update();
    }
}

void Game::Draw() {
    window.ClearBackground(bgColor);
    DrawFPS(5, 5);

    player.Draw();
    for (const auto enemy : enemies) {
        enemy->Draw();
    }
}

void Game::DebugDraw() {
    // Draw debug stuff
    player.DebugDraw();
    for (const auto enemy : enemies) {
        enemy->DebugDraw();
    }
}
