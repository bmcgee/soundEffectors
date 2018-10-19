//
//  visuals.hpp
//  soundeffectors
//
//  Created by Brian McGee on 10/18/18.
//

#ifndef visuals_h
#define visuals_h

#include <stdio.h>

#include "FftObject.h"
#include "ofMain.h"
//#include "ofApp.h"

	

class FftLocVis {
	
	public:
	FftLocVis(){};
	
	ofColor color;
	ofVec2f pos;
	int life;
	float amp;
	float sizeMult = 100;
	float radius;
	
	FftObject* fft_ptr;
	
	void setup(FftObject* fftObj);
	void update();
	void draw();
	
};
/*
int main(int argc, char** argv)
{
	printf("arg\n");
	return 0;
}
*/

#endif /* visuals_hpp */
