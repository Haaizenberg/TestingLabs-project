#include "functions.h"

bool check_collision(int enX, int enY, int bulX, int bulY)
{
    int enWidth = 80;
    int enHeight = 100;
    int bulWidth = 10;
    int bulHeight = 10;
    if (enX >= 0 && enY >=0 && bulX >= 0 && bulY >= 0) {
        if (bulX+bulWidth > enX) {
            if (bulX < enX+enWidth) {
                if (bulY >= enY) {
                    if (bulY+bulHeight <= enY+enHeight)
                        return true;
                    else return false;
                }
            }
        }
    }
        return false;
}

bool check_gameover(int enY, int flag)
{
    if (flag == 0) {
        if (enY > 490)
            return true;
            else return false;
    }
    else if (flag == 1) {
        if (enY > 500) return true;
        else return false;
    }
    return false;
}

bool check_magicBox(int time)
{
    if (time >= 0 && time % 25 == 0) return true;
    else return false;
}
