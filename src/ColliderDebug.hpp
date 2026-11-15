//
// Created by kshitij on 11/15/26.
//

#ifndef RAYLIBGAMEOFF_COLLIDERDEBUG_HPP
#define RAYLIBGAMEOFF_COLLIDERDEBUG_HPP
#include "raylib-cpp.hpp"

const raylib::Color hitboxColor = ColorAlpha(RED, 0.2);
const raylib::Color rangeColor = ColorAlpha(SKYBLUE, 0.2);

static void DrawHitBoxCircle(float x, float y, float radius) {
    DrawCircle(x, y, radius, hitboxColor);
    DrawCircleLines(x, y, radius, RED);
}

static void DrawRangeCircle(float x, float y, float radius) {
    DrawCircle(x, y, radius, rangeColor);
    DrawCircleLines(x, y, radius, SKYBLUE);
}

#endif //RAYLIBGAMEOFF_COLLIDERDEBUG_HPP
