#pragma once

#include "ofMain.h"
#include "ofxSoundPlayerObject.h"
#include "FftObject.h"
#include "waveformDraw.h"
#include "SineWaveGenerator.h"
#include "ofxEasyFft.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
		void plot(vector<float>& buffer, float scale);
	
	ofSoundStream stream;
	ofxSoundOutput output;
	ofxSoundInput input;
	
	//soundobjct subclasses
	ofxSoundPlayerObject player;
	FftObject fft;
	waveformDraw wave;
	
	bool show_fft = true;
	
	//ofxEasyFft fft;
	

		
};
