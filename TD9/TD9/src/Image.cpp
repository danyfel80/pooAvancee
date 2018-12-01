#include "Image.h"
#include <fstream>

Image::Image(int width, int height) :
		width(width), height(height) {
	int length = width * height;
	for (int i = 0; i < length; i++) {
		pixels.push_back(Color());
	}
}

Image::Image(const Image& other) :
		width(other.width), height(other.height) {
	int length = width * height;
	for (int i = 0; i < length; i++) {
		pixels.push_back(other.pixels[i]);
	}

}

Image::~Image() {
}

Image& Image::operator =(const Image& other) {
	if (this != &other) {
		pixels.clear();
		width = other.width;
		height = other.height;
		int length = width * height;
		for (int i = 0; i < length; ++i) {
			pixels.push_back(other.pixels[i]);
		}
	}
	return *this;
}

int Image::getHeight() const {
	return height;
}

int Image::getWidth() const {
	return width;
}

const Color& Image::getPixel(int x, int y) const {
	certifyCoordinates(x, y);
	return pixels[x + y * width];
}

void Image::setPixel(int x, int y, const Color& color) {
	certifyCoordinates(x, y);
	pixels[x + y * width] = color;
}

void Image::certifyCoordinates(int x, int y) const {
	if (width <= x || x < 0) {
		throw "invalid position x on image";
	}
	if (height <= y || y < 0) {
		throw "invalid position y on image";
	}
}

const Color& Image::operator ()(int x, int y) const {
	return getPixel(x, y);
}

void Image::operator()(int x, int y, const Color& color) {
	setPixel(x, y, color);
}

void Image::exportToFile(const Image& image, const std::string& fileName) {
	std::ofstream fileStream;
	fileStream.open(fileName.c_str(), std::ofstream::out);
	if (fileStream.is_open()) {
		fileStream << "P3" << std::endl;
		fileStream << image.width << " " << image.height << std::endl;
		fileStream << 255 << std::endl;
		for (int j = 0; j < image.height; ++j) {
			for (int i = 0; i < image.width; ++i) {
				const Color* pixel = &(image.getPixel(i, j));
				fileStream << pixel->getR() << " " << pixel->getG() << " "
						<< pixel->getB() << " ";
			}
			fileStream << std::endl;
		}
		fileStream.close();
	} else {
		throw "Could not open file to export image.";
	}
}

Image& Image::importFromFile(const std::string& fileName) {
	std::ifstream fileStream;
	fileStream.open(fileName.c_str(), std::ifstream::in);
	if (fileStream.is_open()) {
		std::string type;
		int width, height, maxValue;
		ushort r, g, b;
		Color c;
		fileStream >> type;
		fileStream >> width >> height;
		fileStream >> maxValue;
		Image* im = new Image(width, height);
		for (int j = 0; j < height; ++j) {
			for (int i = 0; i < width; i++) {
				fileStream >> r >> g >> b;
				c.setR(r);
				c.setG(g);
				c.setB(b);
				im->setPixel(i, j, c);
			}
		}
		fileStream.close();
		return *im;
	} else {
		throw "File to read could not be open";
	}
}
