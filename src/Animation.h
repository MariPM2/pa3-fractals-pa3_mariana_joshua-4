#pragma once

#include "ofMain.h"
#include "FractalMode.h"
#include <vector>

class Animation {

private:
	vector<FractalMode*> fractals;
    vector<int>velocity;
    vector<int>counter;
    bool animating = false;
    bool Levels = true;
    
public:
	Animation(vector<int> velocity, vector<FractalMode*> fractals);
	void tick();
    void draw();
    vector<FractalMode*> getFractals(){ return fractals;}
    bool isAnimating(){return animating;};
    void setIsAnimating(bool animating){this->animating=animating;}
};