#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
public:
	float x, y, z;

	Vector3();
//	~Vector3();

	Vector3(float e1, float e2, float e3) {
		x = e1;
		y = e2;
		z = e3;
	}

	Vector3 operator+(const Vector3 &vec);
    Vector3 operator-(const Vector3 &vec);
    
    Vector3 operator*(const float &t);
    
    float dot(const Vector3 &vec);
    Vector3 cross(const Vector3 &vec);
    
    float length();
    Vector3 unit();

};

#endif // VECTOR3_H