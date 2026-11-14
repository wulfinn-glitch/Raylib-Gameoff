#include <iostream>
#include "raylib-cpp.hpp"

int main(){

  // Example using raylib-cpp object-oriented wrapper
  auto window = raylib::Window{800, 450, "RaylibGameOff"};
  SetTargetFPS(60);

  while (!window.ShouldClose()) {
    BeginDrawing();
    window.ClearBackground(RAYWHITE);

    // Draw text using raylib-cpp syntax
    raylib::DrawText("Hello from raylib-cpp!", 190, 200, 20, GRAY);

    EndDrawing();
  }

  return 0;
}
