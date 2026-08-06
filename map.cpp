#include "main.h"
struct Field {
    private:
        Texture2D field[10][20];//0 - пусто
    public:
        void initField(Texture2D empty){
            for(int i = 0; i < 10; i++){
                for(int q = 0; q < 20; q++){
                    field[i][q] = empty;
                }
            }
        }

        void changefield(int x, int y, Texture2D tw){
            field[x][y] = tw;
        }
        void drawField(){
            BeginDrawing();
            for(int i = 0; i < 10; i++){
                for(int q = 0; q < 20; q++){
                    DrawTexture(field[i][q], i * 40, q * 40, WHITE);
                }
            }
            EndDrawing();
        }
};