#ifndef IMAGE_H_
#define IMAGE_H_

#include <iostream>
#include <vector>
#include "Color.h"

class Image {
private:
	int width, height;
	std::vector<Color> pixels;
	void certifyCoordinates(int x, int y) const;

public:
	Image(int width = 10, int height = 10);
	Image(const Image& other);
	virtual ~Image();
	Image& operator=(const Image& other);

	int getHeight() const;
	int getWidth() const;
	const Color& getPixel(int x, int y) const;
	void setPixel(int x, int y, const Color& color);

	const Color& operator()(int x, int y) const;
	void operator()(int x, int y, const Color& color);

	static void exportToFile(const Image& image, const std::string& fileName);
	static Image& importFromFile(const std::string& fileName);
};

#endif /* IMAGE_H_ */
