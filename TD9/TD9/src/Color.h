#ifndef COLOR_H_
#define COLOR_H_

#include <iostream>

class Color {
private:
	ushort r, g, b;
public:
	Color(ushort r = 0, ushort g = 0, ushort b = 0);
	Color(const Color& other);
	virtual ~Color();

	ushort getR() const;
	void setR(ushort r);
	ushort getG() const;
	void setG(ushort g);
	ushort getB() const;
	void setB(ushort b);

	Color& operator=(const Color& other);
	bool operator ==(const Color& other) const;
	friend std::ostream& operator <<(std::ostream& out, const Color& color);
};

#endif /* COLOR_H_ */
