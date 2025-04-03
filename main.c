#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main() {
    // Pencereyi baþlat
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Bubble Shooter");

    // FPS limitle
    SetTargetFPS(60);

    while (!WindowShouldClose()) { // Oyun döngüsü
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Bubble Shooter!", SCREEN_WIDTH / 2 - 100, SCREEN_HEIGHT / 2, 20, DARKBLUE);

        EndDrawing();
    }

    CloseWindow(); // Pencereyi kapat
    return 0;
}
