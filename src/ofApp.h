#pragma once
#include<cmath>

#include "ofMain.h"
#include "DrawMode1.h"
#include "DrawMode2.h"
#include "DrawMode3.h"
#include "DrawMode4.h"
#include "Animation.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

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
		string menuDisplay = "Press 'o' to see options"; 
		bool isMenuDisplayed = false;

	private:
		char mode = '1';

		vector<FractalMode*> fractals;
		
		DrawMode1* drawMode1;
		DrawMode2* drawMode2;
		DrawMode3* drawMode3;
		DrawMode4* drawMode4;
		Animation* animation;
};
