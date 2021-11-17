#pragma once
#include<cmath>

#include "FractalMode.h"

class DrawMode2: public FractalMode{
    public:
    DrawMode2();
    void drawHelper(int length, int n, int x, int y, int d);
    bool getActivate();
    void setActivate();

    void draw();
    // void getActivate();
    // void setActivate();
    private:
        bool activate = false;
};