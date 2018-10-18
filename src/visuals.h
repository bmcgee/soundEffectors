//
//  visuals.hpp
//  soundeffectors
//
//  Created by Brian McGee on 10/18/18.
//

#ifndef visuals_h
#define visuals_h

#include <stdio.h>


#include "ofMain.h"
//#include "ofApp.h"



class FftLocVis {
	
	public:
	FftLocVis(){};
	
	ofColor color;
	ofVec2f pos;
	int life;
	int amplitude;
	float radius;
	
	void setup();
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
