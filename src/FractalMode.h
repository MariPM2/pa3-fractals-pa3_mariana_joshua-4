#pragma once

#include "ofMain.h"
#include <vector>

class FractalMode{
    public:
    FractalMode();

    virtual void draw()=0;
    virtual bool getActivate() = 0;
    virtual void setActivate() = 0;
    int getLevels(){ return levels;}
    void setLevels(int L){levels = L;}
    void addLevels(){levels++;}
    void substractLevels(){levels--;}

    protected:
    int levels;
    vector<ofColor> colors;
};