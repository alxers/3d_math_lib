#include <iostream>
#include "Matrix.h"
#include "Vector3.h"

int main() {
    Matrix<double, 2> m1(5.0);
    Matrix<double, 2> m2(2.0);
    Matrix<double, 2> m3;
    m3 = m1 * m2;
    std::cout << m1(1, 1) << std::endl;
    return 0;
}
