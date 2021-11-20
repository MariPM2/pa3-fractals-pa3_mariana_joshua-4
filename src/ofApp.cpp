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
    ofDrawBitmapStringHighlight(menuDisplay, 30, 30, ofColor(0,0,0), ofColor(255,255,255));
    ofNoFill();
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

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    if(!animation->isAnimating()){
    switch (key)
    {
    case 'o':
        if(menuDisplay == "Press 'o' to see options"){ menuDisplay = "PROGRAM MENU: \n*Press keys from 1 - 4 \n to activate fractals \n*Press '-' or '='\n to change levels \n*Press Spacebar to play animation \n or 'c' to cancel it \n*Press 'o' to open/close menu";}
        else{menuDisplay = "Press 'o' to see options";}
        break;
    case '1':
        drawMode1->setActivate();
        break;
    case '2':
        drawMode2->setActivate();
        break;
    case '3':
        drawMode3->setActivate();
        break;
    case '4':
        drawMode4->setActivate();
        break;
    case '=':
        for(FractalMode* f: fractals){
            if(f->getLevels()<10){
                f->addLevels();
            }
        }
        break;
    case '-':
        for(FractalMode* f: fractals){
            if(f->getLevels()>0){
                f->substractLevels();
            }
        }
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