#include <iostream>
#include "vector3.h"
#include "matrix.h"

int main() {
    Matrix m1(3, 3, 1.0);
    Matrix m2;
    m2 = m1 * 5.0;
    std::cout << m2(1, 1) << std::endl;
	return 0;
}
