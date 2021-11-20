#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetWindowTitle("PA3 - Fractals");

    drawMode1 = new DrawMode1();
    drawMode2 = new DrawMode2();
    drawMode3 = new DrawMode3();
    drawMode4 = new DrawMode4();
    animation = new Animation({30,30,30,30},{drawMode1,drawMode2,drawMode3,drawMode4});
    

    fractals.push_back(drawMode1);
    fractals.push_back(drawMode2);
    fractals.push_back(drawMode3);
    fractals.push_back(drawMode4);

}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);

    animation->tick();
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The draw method is called muliple times per second
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
    // if(mode1state == true){
    //     fractals[0]->draw();
    // }if(mode2state == true){
    //     fractals[1]->draw();
    // }if(mode3state == true) {
    //     fractals[2]->draw();
    // }if(mode4state == true){
    //     fractals[3]->draw();
    // }
    if(drawMode1->getActivate() == true){
        fractals[0]->draw();
    }if(drawMode2->getActivate() == true){
        fractals[1]->draw();
    }if(drawMode3->getActivate() == true) {
        fractals[2]->draw();
    }if(drawMode4->getActivate() == true){
        fractals[3]->draw();
    }
    animation->draw();
}
// void ofApp::drawMode1(int x, int y, int n)
// {
//     if (n != 0)
//     {
//         ofDrawRectangle(x,y,50,50);
//         // ofDrawCircle(x, y, 100);
//         drawMode1(x + 100, y, n - 1);
//         drawMode1(x - 100, y, n - 1);
//         drawMode1(x, y + 100, n - 1);
//         drawMode1(x, y - 100, n - 1);
//     }
// }
// void ofApp::drawMode2(int length, int n, int x, int y, int d)
// {
//     if (n != 0)
//     {
//         int middleX = x;
//         int middleY = y - length;
//         int leftBranchX = x - length * cos(PI / 180 * d);
//         int leftBranchY = middleY - length * sin(PI / 180 * d);
//         int rightBranchX = x + length * cos(PI / 180 * d);
//         int rightBranchY = middleY - length * sin(PI / 180 * d);

//         ofDrawLine(x, y, x, y - length);
//         ofDrawLine(x, y - length, x, y - length*2);
//         ofDrawLine(x, y - length, rightBranchX, rightBranchY);
//         ofDrawLine(x, y - length, leftBranchX, leftBranchY);

//         drawMode2(length / 2, n - 1, rightBranchX, rightBranchY, 30);
//         drawMode2(length / 2, n - 1, middleX, middleY, 30);
//         drawMode2(length / 2, n - 1, leftBranchX, leftBranchY, 30);
//     }
// }

// void ofApp::drawMode3(float x, float y, float size, int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     ofPoint a(x, y);
//     ofPoint b(x + size, y);
//     ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

//     ofDrawTriangle(a, b, c);

//     drawMode3(x, y, size / 2, n - 1);
//     drawMode3((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
//     drawMode3((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
// }

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    if(!animation->isAnimating()){
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
            // mode1state = !mode1state;
            drawMode1->setActivate();
            break;
        case '2':
            // mode2state = !mode2state;
            drawMode2->setActivate();
            break;
        case '3':
            // mode3state = !mode3state;
            drawMode3->setActivate();
            break;
        case '4':
            // mode4state = !mode4state;
            drawMode4->setActivate();
            break;
        case '=':
            // levels++;
            for(FractalMode* f: fractals){
                if(f->getLevels()<10){
                    f->addLevels();
                }
            }
            // drawMode1->addLevels();
            // drawMode2->addLevels();
            // drawMode3->addLevels();
            // drawMode4->addLevels();
            // ofSetColor(colors[rand() % colors.size()]);
            break;
        case '-':
            // levels--;
            for(FractalMode* f: fractals){
                if(f->getLevels()>0){
                    f->substractLevels();
                }
            }
            // drawMode1->substractLevels();
            // drawMode2->substractLevels();
            // drawMode3->substractLevels();
            // drawMode4->substractLevels();
            // ofSetColor(colors[rand() % colors.size()]);
            break;

    }
    }
    switch (key)
    {
    case ' ':
        animation->setIsAnimating(true);
        for(FractalMode* f: animation->getFractals()){
            f->setLevels(0);
        }
        break;
    case 'c':
        animation->setIsAnimating(false);
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