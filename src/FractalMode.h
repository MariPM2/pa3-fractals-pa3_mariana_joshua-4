#pragma once

#include "ofMain.h"
#include <vector>

class FractalMode{
    public:
    FractalMode();

    virtual void draw()=0;
    bool getActivate();
    void setActivate();
    int getLevels(){ return levels;}
    void addLevels(){ levels++;}
    void substractLevels(){ levels--;}

    protected:
    int levels = 10;
    vector<ofColor> colors;
    

};