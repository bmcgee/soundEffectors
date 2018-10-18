//
//  helperFuncs.cpp
//  soundeffectors
//
//  Created by Brian McGee on 10/18/18.
//

#include "helperFuncs.h"

void xSnap(float x) {
	int h = 96;
	x = x / h;
	x = round(x);
	x = x * h;
	return x;
}

void ySnap(float y) {
	int w = 54;
	y = y / w;
	y = round(y);
	y = y * w;
	return y;
}

void smoothVal(float val) {
	
}
