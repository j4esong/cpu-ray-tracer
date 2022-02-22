
#ifndef VEC3_HPP
#define VEC3_HPP

class vec3
{
public:
	float values[3];
	vec3();
	vec3(float c);
	vec3(float x, float y, float z);
	vec3 operator + (const vec3& v);
	vec3 operator - (const vec3& v);
	vec3 operator * (const float c);
	vec3& operator += (const vec3& v);
	const float& operator [] (const unsigned int& i) const;
	float& operator [] (const unsigned int& i);
};

#endif