#include "DrawMode2.h"

DrawMode2::DrawMode2(){

}
void DrawMode2::draw(){
    drawHelper(200, getLevels(), ofGetWidth()/2, ofGetHeight()-50, 30);
    drawHelper(110, getLevels(), (ofGetWidth()/2) - 340, ofGetHeight()-50, 50);
    drawHelper(110, getLevels(), (ofGetWidth()/2) + 340, ofGetHeight()-50, 50);
    drawHelper(50, getLevels(), (ofGetWidth()/2) - 150, ofGetHeight()-50, 50);
    drawHelper(50, getLevels(), (ofGetWidth()/2) + 150, ofGetHeight()-50, 50);
}
void DrawMode2::drawHelper(int length, int n, int x, int y, int d){
    ofSetColor(colors[n]);
    if (n != 0)
    {
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);

        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length*2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX, leftBranchY);

        drawHelper(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawHelper(length / 2, n - 1, middleX, middleY, 30);
        drawHelper(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }
}
// void DrawMode2::getActivate(){}
// void DrawMode2::setActivate(){}