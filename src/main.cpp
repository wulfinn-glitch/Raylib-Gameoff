#include <iostream>
#include "raylib-cpp.hpp"

#include "globals.hpp"
#include "player.hpp"

int main(){
  // Initialization
  //--------------------------------------------------------------------------------------
  const raylib::Color textColor = raylib::Color::LightGray();
  SetConfigFlags(FLAG_MSAA_4X_HINT);
  raylib::Window window(screenWidth, screenHeight, "Raylib GameOff");

  SetTargetFPS(60);
  //--------------------------------------------------------------------------------------

  Player player(screenWidth/2, screenHeight-50);

  // Main game loop
  while (!window.ShouldClose()) {   // Detect window close button or ESC key
    // Update
    //----------------------------------------------------------------------------------
    // Update your variables here
    player.Update(GetFrameTime());
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    while (window.Drawing()) {
      window.ClearBackground(BLACK);
      DrawFPS(5, 5);
      player.Draw();

      if (debugDraw) {
        // Draw debug shit
        textColor.DrawText("Debug Draw!", 190, 200, 20);
        player.DebugDraw();
      }
    }
    //----------------------------------------------------------------------------------
  }

  return 0;
}
