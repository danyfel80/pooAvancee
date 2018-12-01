#include "Color.h"

Color::Color(ushort r, ushort g, ushort b) :
		r(r), g(g), b(b) {
}

Color::Color(const Color& other) :
		r(other.r), g(other.g), b(other.b) {
}

Color::~Color() {
}

Color& Color::operator =(const Color& other) {
	if (this != &other) {
		this->r = other.r;
		this->g = other.g;
		this->b = other.b;
	}
	return *this;
}

ushort Color::getR() const {
	return r;
}

void Color::setR(ushort r) {
	this->r = r;
}

ushort Color::getG() const {
	return g;
}

void Color::setG(ushort g) {
	this->g = g;
}

ushort Color::getB() const {
	return b;
}

void Color::setB(ushort b) {
	this->b = b;
}

bool Color::operator ==(const Color& other) const {
	return r == other.r && g == other.g && b == other.b;
}

std::ostream& operator <<(std::ostream& out, const Color& color) {
	out << "(" << color.r << ", " << color.g << ", " << color.b << ")";
	return out;
}
