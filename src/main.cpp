
#include <iostream>

#include "Image.hpp"
#include "vec3.hpp"

int main()
{
	Image i(100, 100, (vec3(0.5, 0.0, 0.0) + vec3(0.0, 0.5, 0.25)) * 2.0);
	i.writePPM("image.ppm");
	return 0;
}