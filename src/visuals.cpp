//
//  visuals.cpp
//  soundeffectors
//
//  Created by Brian McGee on 10/18/18.
//

#include "visuals.h"
#include "ofApp.h"

//FftLocVis::FftLocVis(FftObject& fftObj) {
//	fft = fftObj;
//}

void FftLocVis::setup(FftObject* fftObj){
	cout << &typeid(fftObj);
	pos.set(ofGetMouseX(), ofGetMouseY());
	fft_ptr = fftObj;
	
	color.set(0, 255, 0);
	
};

void FftLocVis::update() {
	int freqToGet = int(pos.x);
	amp = fft_ptr->getAmpAtFreq(freqToGet);
	radius = sizeMult * amp;
	
};


void FftLocVis::draw() {
	ofPushStyle();
	ofSetColor(color);
	ofDrawCircle(pos.x, pos.y, radius);
	ofPopStyle();

	
	
	
	ofApp* app = ofApp::get_instance();
//	cout << app->globalScale << std::endl;
//	cout << shared_shit << endl;

};
