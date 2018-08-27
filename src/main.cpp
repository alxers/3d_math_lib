#include <iostream>
#include "vector3.h"
#include "matrix.h"

int main() {
    Matrix obj1(3, 3, 4.0);
	Matrix obj2(3, 3, 3.0);
    Matrix obj3(3, 3, 0.0);
    Matrix obj4 = obj2 + obj1;
    std::cout << obj4(2,2) << std::endl;
	return 0;
}