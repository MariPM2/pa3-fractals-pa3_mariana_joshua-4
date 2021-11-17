#pragma once
#include<cmath>

#include "FractalMode.h"

class DrawMode1: public FractalMode{
    public:
    DrawMode1();

    void draw();
    void drawHelper(int x, int y, int n);
    // void getActivate();
    // void setActivate();
};