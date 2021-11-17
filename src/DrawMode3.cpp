#include "DrawMode3.h"

DrawMode3::DrawMode3(){

}
void DrawMode3::draw(){
    drawHelper(ofGetWidth() / 3, 10, ofGetHeight() / 2, getLevels());
}

void DrawMode3::drawHelper(float x, float y, float size, int n){
    // ofSetColor(colors[n]);
    
   if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    drawHelper(x, y, size / 2, n - 1);
    drawHelper((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawHelper((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}
bool DrawMode3::getActivate(){return activate;}
void DrawMode3::setActivate(){activate = !activate;}