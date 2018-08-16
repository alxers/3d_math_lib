#include "vector3.h"

Vector3::Vector3()
{
}

Vector3::~Vector3()
{
}

Vector3::operator +(const& Vector3 vec1, const& Vector3 vec2) {
	return Vector3(vec1.x + vec2.x, vec1.y + vec2.y, vec1.z + vec2.z);
}

