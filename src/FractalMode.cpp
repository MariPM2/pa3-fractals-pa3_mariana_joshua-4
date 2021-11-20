#include "FractalMode.h"

FractalMode::FractalMode(){
    for(int i=0; i<100; i++){
        colors.push_back(ofColor(ofRandom(255),ofRandom(255),ofRandom(255)));
    }
}