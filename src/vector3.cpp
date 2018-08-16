#include "vector3.h"

Vector3 Vector3::operator+(const Vector3 &vec) {
	Vector3 v = Vector3(this->x + vec.x, this->y + vec.y, this->z + vec.z);
//	return Vector3(this->x + vec.x, this->y + vec.y, this->z + vec.z);
	return v;
}

