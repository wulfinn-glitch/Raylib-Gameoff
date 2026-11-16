#include "Game.hpp"
#include <entt/entt.hpp>

// Main Game class

int main(){

  entt::registry registry;

  SetConfigFlags(FLAG_WINDOW_HIGHDPI | FLAG_MSAA_4X_HINT);
  entt::entity game = registry.create();
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
