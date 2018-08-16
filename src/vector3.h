#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
public:
	Vector3();
	~Vector3();
	
	Vector3(float x, float y, float z) {
		e[0] = x;
		e[1] = y;
		e[2] = z;
	}
	
	Vector3 operator+(Vector3 vec1, Vector3 vec2);
	Vector3 operator-(Vector3 vec1, Vector3 vec2);

	float e[3];
};

#endif // VECTOR3_H
