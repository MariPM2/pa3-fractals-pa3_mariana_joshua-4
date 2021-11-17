#include "DrawMode4.h"

DrawMode4::DrawMode4(){}

void DrawMode4::draw(){
    drawHelper(ofGetWidth()/2 -400,ofGetHeight()/2, getLevels()-9);
    drawHelper(ofGetWidth()/2 -400,ofGetHeight()/2 - 150, getLevels()-9);
    drawHelper(ofGetWidth()/2 -400,ofGetHeight()/2 + 150, getLevels()-9);
}
void DrawMode4::drawHelper(int x, int y, int n){
    ofSetColor(colors[n]);
    if (n != 0)
    {
        ofSetSphereResolution(5);
        ofDrawSphere(x,y,50,50);
        // ofSetCircleResolution(6);
        // ofDrawCircle(x,y,50,50);
        
        drawHelper(x + 100, y, n - 1);
        // drawHelper(x - 100, y, n - 1);
        // drawHelper(x+50, y + 100, n - 1);
        // drawHelper(x+50, y - 100, n - 1);
    }
}
bool DrawMode4::getActivate(){return activate;}
void DrawMode4::setActivate(){activate = !activate;}