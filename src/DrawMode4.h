#pragma once
#include<cmath>

#include "FractalMode.h"

class DrawMode4: public FractalMode{
    public:
    DrawMode4();

    void draw();
    void drawHelper(int x, int y, int n);
    // void getActivate();
    // void setActivate();
};