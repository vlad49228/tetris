#include "main.h"
#include <format>
#include <string>
struct vecBlock{
    int type, posx, posy;
    Texture2D texture;
};
class Block{
    public:
    int type, posx, posy;//потом придумаем
    Color color;
    Texture2D texture;
    vector<vecBlock> block;
    //Block(int ty, int x, int y, Color col, Texture2D tex) : type(ty), posx(x), posy(y), texture(tex){}
    void spawn(){
        type = GetRandomValue(1, 7);
        texture = LoadTexture("../assets/blocks/block1.png");
        color = ColorFromHSV(GetRandomValue(0, 360), 1.0f, 1.0f);
        posx = 5;
        posy = 5;
        for(int i = 0; i < 7;i++)block.emplace_back(type, posx, posy, texture);
    }
    void rendering(){
        if(IsKeyPressed(KEY_S)){
            for(int i = 0; i < 4; i++){
            }
        }
        DrawTexture(block[0].texture, block[0].posx * 40 + 200, block[0].posy * 40, color);
        DrawTexture(block[1].texture, block[1].posx * 40 + 200, block[1].posy * 40 - 40, color);
        DrawTexture(block[2].texture, block[2].posx * 40 + 200, block[2].posy * 40 - 80, color);
        DrawTexture(block[3].texture, block[3].posx * 40 + 200, block[3].posy * 40 - 120, color);
    }
};
