#include "DrawMode1.h"

DrawMode1::DrawMode1(){
    levels=4;
}

void DrawMode1::draw(){
    drawHelper(ofGetWidth()/2,ofGetHeight()/2 -30, levels);
}
void DrawMode1::drawHelper(int x, int y, int n){
    ofSetColor(colors[n]);
    if (n != 0)
    {
        ofDrawRectangle(x,y,50,50);
        // ofDrawCircle(x, y, 100);
        drawHelper(x + 100, y, n - 1);
        drawHelper(x - 100, y, n - 1);
        drawHelper(x, y + 100, n - 1);
        drawHelper(x, y - 100, n - 1);
    }
}
bool DrawMode1::getActivate(){ return activate;}
void DrawMode1::setActivate(){ activate = !activate;}