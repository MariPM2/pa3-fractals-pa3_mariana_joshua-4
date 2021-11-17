#include "FractalMode.h"

FractalMode::FractalMode(){
    for(int i=0; i<100; i++){
        colors.push_back(ofColor(ofRandom(255),ofRandom(255),ofRandom(255)));
    }
    // colors.push_back(ofColor(255,0,0));
    // colors.push_back(ofColor(0,255,0));
    // colors.push_back(ofColor(0,0,255));
    // colors.push_back(ofColor(247,255,0));
    // colors.push_back(ofColor(255,137,0));
    // colors.push_back(ofColor(255,255,255));
    // colors.push_back(ofColor(180,0,216));
}