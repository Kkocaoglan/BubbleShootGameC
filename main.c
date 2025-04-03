#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main() {
    // Pencereyi ba�lat
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Bubble Shooter");

    // FPS limitle
    SetTargetFPS(60);

    while (!WindowShouldClose()) { // Oyun d�ng�s�
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Bubble Shooter!", SCREEN_WIDTH / 2 - 100, SCREEN_HEIGHT / 2, 20, DARKBLUE);

        EndDrawing();
    }

    CloseWindow(); // Pencereyi kapat
    return 0;
}
