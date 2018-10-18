//
//  visuals.cpp
//  soundeffectors
//
//  Created by Brian McGee on 10/18/18.
//

#include "visuals.h"


#include "FftObject.h"
#include "ofApp.h"

//FftLocVis::FftLocVis() {
//
//}

void FftLocVis::setup() {
	pos.set(ofGetMouseX(), ofGetMouseY());
}

void FftLocVis::update() {
	fft.getAmpAtFreq(pos.x);
}


void FftLocVis::draw() {
	ofPushStyle();
	ofSetColor(color);
	ofDrawCircle(pos.x, pos.y, radius);
	ofPopStyle();
	
	ofApp* app = ofApp::get_instance();
	
	cout << app->globalScale << std::endl;
	
	cout << shared_shit << endl;
	
	//app->fft.
	//std::cout << &app->fft.audioBins[0] << std::cout;
//	auto ptrToApp = dynamic_cast<ofApp*>(ofGetAppPtr());
//	ptrToApp->fft->;
	//std::cout << ptrToApp->fft->fucker << endl;
//	fft->fucker = 1234;
}
