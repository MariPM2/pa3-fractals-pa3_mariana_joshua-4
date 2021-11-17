#pragma once
#include<cmath>

#include "FractalMode.h"

class DrawMode3: public FractalMode{
    public:
    DrawMode3();

    void draw();
    void drawHelper(float x, float y, float size, int n);
    // void getActivate();
    // void setActivate();
};