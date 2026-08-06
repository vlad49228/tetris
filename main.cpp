#include "main.h"
#include "map.cpp"
#include <raylib.h>
int main(){
    InitWindow(400, 800, "Tetris");
    Field field;
    Texture2D empty = LoadTexture("empty.png");
    field.initField(empty);
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        field.drawField();
        EndDrawing();
    }
}