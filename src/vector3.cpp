#include "vector3.h"

Vector3 Vector3::operator+(const Vector3 &vec) {
	return Vector3(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}