
#include "vec3.hpp"

vec3::vec3() : values{0, 0, 0} {}

vec3::vec3(float c) : values{c, c, c} {}

vec3::vec3(float x, float y, float z) : values{x, y, z} {}

vec3 vec3::operator + (const vec3& v)
{
	return vec3(values[0] + v[0], values[1] + v[1], values[2] + v[2]);
}

vec3 vec3::operator - (const vec3& v)
{
	return vec3(values[0] - v[0], values[1] - v[1], values[2] - v[2]);
}

vec3 vec3::operator * (const float c)
{
	return vec3(values[0] * c, values[1] * c, values[2] * c);
}

vec3& vec3::operator += (const vec3& v)
{
	values[0] += v[0];
	values[1] += v[1];
	values[2] += v[2];
	return *this;
}

const float& vec3::operator [] (const unsigned int& i) const
{
	return values[i];
}

float& vec3::operator [] (const unsigned int& i)
{
	return values[i];
}