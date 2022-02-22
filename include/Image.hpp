
#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <algorithm>

#include "vec3.hpp"

class Image
{
public:
	unsigned int w, h;
	vec3* pixels;
	Image();
	~Image();
	Image(const unsigned int &w, const unsigned int &h, const vec3 &c = vec3(0.0));
	vec3& operator [] (const unsigned int &i);
	const vec3& operator [] (const unsigned int &i) const;
	void writePPM(const char* name);
};

#endif