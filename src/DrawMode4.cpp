#include "DrawMode4.h"

DrawMode4::DrawMode4(){
    levels=1;
}

void DrawMode4::draw(){
    drawHelper(ofGetWidth()/2 -400,ofGetHeight()/2, levels);
    drawHelper(ofGetWidth()/2 -400,ofGetHeight()/2 - 150, levels);
    drawHelper(ofGetWidth()/2 -400,ofGetHeight()/2 + 150, levels);
}
void DrawMode4::drawHelper(int x, int y, int n){
    ofSetColor(colors[n]);
    if (n != 0)
    {
        ofSetSphereResolution(5);
        ofDrawSphere(x,y,50,50);
        drawHelper(x + 100, y, n - 1);
    }
}
bool DrawMode4::getActivate(){return activate;}
void DrawMode4::setActivate(){activate = !activate;}