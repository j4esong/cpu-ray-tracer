
#include "Image.hpp"

Image::Image()
	: w(0), h(0), pixels(nullptr) {}

Image::Image(const unsigned int &w, const unsigned int &h, const vec3 &c)
	: w(w), h(h), pixels(nullptr)
{
	pixels = new vec3[w * h];
	for (unsigned int i = 0; i < w * h; i++)
		pixels[i] = c;
}

vec3& Image::operator [] (const unsigned int &i)
{
	return pixels[i];
}

const vec3& Image::operator [] (const unsigned int &i) const
{
	return pixels[i];
}

Image::~Image()
{
	delete[] pixels;
}

void Image::writePPM(const char* name)
{
	std::ofstream ofs;
	ofs.open(name, std::ios::binary);
	ofs << "P6\n" << w << " " << h << "\n255\n";
	unsigned char r, g, b;
	for (unsigned int i = 0; i < w * h; i++) {
		r = std::min(1.0f, pixels[i].values[0]) * 255;
		g = std::min(1.0f, pixels[i].values[1]) * 255;
		b = std::min(1.0f, pixels[i].values[2]) * 255;
		ofs << r << g << b;
	}
	ofs.close();
}