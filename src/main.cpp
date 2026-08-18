#include "main.h"
#include "map.cpp"
#include "logic.cpp"
#include <raylib.h>

int w = 800;
int h = 800;

int main(){
    InitWindow(w, h, "Tetris");
    Field field;
    Block block;
    int currentBlock = 0;
    Texture2D empty = LoadTexture("empty.png");
    field.initField(empty);
    SetTargetFPS(60);
    HideCursor();// hide cursor
    block.spawn();
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        field.drawField();
        block.rendering();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}