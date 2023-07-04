#include "raylib.h"

int main(void)
{
    const int screenWidth = 500;
    const int screenHeight = 500;
    
    InitWindow(screenWidth, screenHeight, "carlos.");
    Color black = {0, 0, 0, 255};
    Color white = {255, 255, 255, 255};

    Image carlos = LoadImage("carlos.png");
    Texture2D texture = LoadTextureFromImage(carlos); 
    UnloadImage(carlos);  
    float position[2] = {(screenWidth/2)+78, (screenHeight/2)-68};
    float speed = 2.5;

    SetTargetFPS(60); 
    SetWindowIcon(carlos);

    while (!WindowShouldClose())   
    {
        BeginDrawing();

            if (IsKeyDown(KEY_RIGHT)){
                position[0] += speed;
            }
            if (IsKeyDown(KEY_LEFT)){
                position[0] -= speed;
            }
            if (IsKeyDown(KEY_DOWN)){
                position[1] += speed;
            }
            if (IsKeyDown(KEY_UP)){
                position[1] -= speed;
            }

            ClearBackground(white);
            DrawText("hewwo, world.", (screenWidth/2)+10, (screenHeight/2)+10, 30, black);
            DrawTexture(texture, position[0], position[1], WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
