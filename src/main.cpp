#include <iostream>
#include "vector3.h"

int main() {
	std::cout << "hello" << std::endl;
	Vector3 obj1(1.0, 1.0, 0.0);
	Vector3 obj2(2.0, 3.0, 0.0);
	Vector3 obj3 = obj1 + obj2;
	std::cout << obj3.unit().x << std::endl;
	return 0;
}