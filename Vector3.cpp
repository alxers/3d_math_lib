#include "Vector3.h"
#include <cmath>

Vector3 Vector3::operator+(const Vector3 &vec)
{
    return Vector3(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

Vector3 Vector3::operator-(const Vector3 &vec)
{
    return Vector3(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

Vector3 Vector3::operator*(const float &t)
{
    return Vector3(this->x * t, this->y * t, this->z * t);
}

float Vector3::dot(const Vector3 &vec)
{
    return this->x * vec.x + this->y * vec.y + this->z * vec.z;
}

Vector3 Vector3::cross(const Vector3 &vec)
{
    return Vector3((this->y * vec.z - this->z * vec.y), (this->x * vec.z - this->z * vec.x), (this->x * vec.y - this->y * vec.x));
}

float Vector3::length()
{
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

Vector3 Vector3::unit()
{
    return Vector3(this->x / this->length(), this->y / this->length(), this->z / this->length());
}
