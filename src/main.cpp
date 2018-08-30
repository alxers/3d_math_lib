#include <iostream>
#include "vector3.h"
#include "matrix.h"

int main() {
    Matrix m1(3, 3);
    std::cout << m1(1, 1) << std::endl;
	return 0;
}
