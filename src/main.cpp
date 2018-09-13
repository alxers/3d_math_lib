#include <iostream>
#include "vector3.h"
#include "matrix.h"

int main() {
    Matrix m1(2, 4, 3.0);
    Matrix m2(4, 18, 2.0);
    Matrix m3;
    m3 = m1 * m2;
    //std::cout << m3(1, 2) << std::endl;
	return 0;
}
