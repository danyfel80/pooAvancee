//============================================================================
// Author      : Daniel Gonzalez
// Version     : 1
// Description : Create PPM images
//============================================================================

#include <iostream>
using namespace std;

#include "Image.h"

int main() {
	Color c(4,7,93);
	cout << c << endl;

	Image im(3,2);
	im(0,0, Color(255,0,0));
	im(1,0, Color(0,255,0));
	im(2,0, Color(0,0,255));
	im(0,1, Color(255,255,0));
	im(1,1, Color(255,255,255));
	im(2,1, Color(0,0,0));

	Image::exportToFile(im, "out.ppm");

	Image* readImage = &(Image::importFromFile("out.ppm"));
	for (int j = 0; j < readImage->getHeight(); j++) {
		for (int i = 0; i < readImage->getWidth(); i++) {
			cout << im(i,j) << " ";
		}
		cout << endl;
	}
	return 0;
}
