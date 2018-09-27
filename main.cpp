#include <iostream>
#include "Vector3.h"
#include "Matrix.h"

int main() {
    Matrix<double> m1(2, 3.0);
    Matrix<double> m2(2, 2.0);
    Matrix<double> m3;
    m3 = m1 * m2;
    //std::cout << m3(1, 2) << std::endl;
    return 0;
}
