#pragma once
#include<cmath>

#include "ofMain.h"
#include "DrawMode1.h"
#include "DrawMode2.h"
#include "DrawMode3.h"
#include "DrawMode4.h"
//#include "FractalMode.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		// void drawMode1(int x, int y, int n);
		// void drawMode2(int length, int n, int x, int y, int d);
		// void drawMode3(float x, float y, float size, int n);
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		// int levels = 10;
		// vector<ofColor> colors;
	private:
		char mode = '1';
		// bool mode1state = true;
		// bool mode2state = false;
		// bool mode3state = false;
		// bool mode4state = false;

		vector<FractalMode*> fractals;
		
		DrawMode1* drawMode1;
		DrawMode2* drawMode2;
		DrawMode3* drawMode3;
		DrawMode4* drawMode4;
};
