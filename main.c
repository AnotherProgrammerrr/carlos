#include "include/raylib.h"

int main(void)
{
    InitWindow(500, 500, "carlos.");

    Texture2D text = LoadTextureFromImage(LoadImage("carlos.png")); 
    Vector2 pos = { GetScreenWidth() / 2.0f + 78, GetScreenHeight() / 2.0f - 68 };
    float speed = 2.5;

    SetTargetFPS(60); 
    SetWindowIcon(LoadImage("carlos.png"));

    while (!WindowShouldClose())   
    {
        BeginDrawing();
            
        if (IsKeyDown(KEY_RIGHT)) pos.x += speed;
        if (IsKeyDown(KEY_LEFT)) pos.x -= speed;
        if (IsKeyDown(KEY_DOWN)) pos.y += speed;
        if (IsKeyDown(KEY_UP)) pos.y -= speed;

            ClearBackground(WHITE);
            DrawText("hewwo, world.", (GetScreenWidth()/2)+10, (GetScreenHeight()/2)+10, 30, BLACK);
            DrawTexture(text, pos.x, pos.y, WHITE);

        EndDrawing();
    }

    UnloadTexture(text);
    CloseWindow();

    return 0;
}
