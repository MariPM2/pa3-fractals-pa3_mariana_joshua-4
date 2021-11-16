#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    colors.push_back(ofColor(255,0,0));
    colors.push_back(ofColor(0,255,0));
    colors.push_back(ofColor(0,0,255));
    colors.push_back(ofColor(247,255,0));
    colors.push_back(ofColor(255,137,0));
    colors.push_back(ofColor(255,255,255));
    colors.push_back(ofColor(180,0,216));
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    // if (mode == '1')
    // {
    //     drawMode1(ofGetWidth() / 2, ofGetHeight() / 2, 4);
    // }
    // else if (mode == '2')
    // {
    //     drawMode2(200, 10, ofGetWidth() / 2, ofGetHeight() - 50, 30);
    // }
    // else if (mode == '3')
    // {
    //     drawMode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, 10);
    // }
    if(mode1state == true){
        drawMode1(ofGetWidth()/2, (ofGetHeight()/2) - 50, levels-6);
    }if(mode2state == true){
        drawMode2(200, levels, ofGetWidth()/2, ofGetHeight()-50, 30);
        drawMode2(110, levels, (ofGetWidth()/2) - 340, ofGetHeight()-50, 50);
        drawMode2(110, levels, (ofGetWidth()/2) + 340, ofGetHeight()-50, 50);
        drawMode2(50, levels, (ofGetWidth()/2) - 150, ofGetHeight()-50, 50);
        drawMode2(50, levels, (ofGetWidth()/2) + 150, ofGetHeight()-50, 50);
    }if(mode3state == true) {
        drawMode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, levels);

    }
}
void ofApp::drawMode1(int x, int y, int n)
{
    if (n != 0)
    {
        ofDrawRectangle(x,y,50,50);
        // ofDrawCircle(x, y, 100);
        drawMode1(x + 100, y, n - 1);
        drawMode1(x - 100, y, n - 1);
        drawMode1(x, y + 100, n - 1);
        drawMode1(x, y - 100, n - 1);
    }
}
void ofApp::drawMode2(int length, int n, int x, int y, int d)
{
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

        drawMode2(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawMode2(length / 2, n - 1, middleX, middleY, 30);
        drawMode2(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }
}

void ofApp::drawMode3(float x, float y, float size, int n)
{
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    drawMode3(x, y, size / 2, n - 1);
    drawMode3((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawMode3((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    // case '1':
    //     mode = '1';
    //     break;
    // case '2':
    //     mode = '2';
    //     break;
    // case '3':
    //     mode = '3';
    //     break;
    // case '4':
    //     mode = '4';
    //     break;
    case '1':
            mode1state = !mode1state;
            break;
        case '2':
            mode2state = !mode2state;
            break;
        case '3':
            mode3state = !mode3state;
            break;
        case '4':
            mode4state = !mode4state;
            break;
        case '=':
            levels++;
            ofSetColor(colors[rand() % colors.size()]);
            break;
        case '-':
            levels--;
            ofSetColor(colors[rand() % colors.size()]);
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}