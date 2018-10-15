#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetLogLevel(OF_LOG_VERBOSE);
	int bufferSize = 512;
	
	cout << stream.listDevices();
	
	stream.setup(2, 0 , 44100, bufferSize, 4);
	stream.setOutput(output);
	stream.setInput(input);
	
	fft.setup(bufferSize);
	
	player.load("/Users/brian.mcgee/dev/openFrameworks/apps/myApps/audio_visuals/bin/data/coldBlood.mp3");
	player.play();
	
	player.connectTo(fft).connectTo(output);
	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	if (show_fft) {
		fft.draw(ofRectangle(0, ofGetHeight()/2, ofGetWidth(), ofGetHeight()/2));
	}
	fft.getAmpAtFreq();
	
	
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key) {
		case 'v':
			show_fft =  !show_fft;
			break;
	}
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
