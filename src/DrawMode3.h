#pragma once
#include<cmath>

#include "FractalMode.h"

class DrawMode3: public FractalMode{
    public:
    DrawMode3();

    void draw();
    void drawHelper(float x, float y, float size, int n);
    bool getActivate();
    void setActivate();
    // void getActivate();
    // void setActivate();
    private:
        bool activate = false;
};