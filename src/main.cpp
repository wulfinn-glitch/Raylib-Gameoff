#include "Game.hpp"

// Main Game class

int main(){
  // Initialization
  //--------------------------------------------------------------------------------------
  SetConfigFlags(FLAG_WINDOW_HIGHDPI | FLAG_MSAA_4X_HINT);
  Game game;
  //--------------------------------------------------------------------------------------

  // Main game loop
  while (!game.window.ShouldClose()) {   // Detect window close button or ESC key
    // Update
    //----------------------------------------------------------------------------------
    // Update your variables here
    game.Update();
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    while (game.window.Drawing()) {
      game.Draw();

      rlImGuiBegin();
      ImGui::Begin("Debug Menu");
      ImGui::Checkbox("Draw", &game.debugDraw);

      if (game.debugDraw) {
        game.DebugDraw();
      }

      ImGui::End();
      rlImGuiEnd();
    }
    //----------------------------------------------------------------------------------
  }

  return 0;
}
