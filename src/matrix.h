#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix
{
public:
    int rows, cols;
    std::vector<std::vector<double> > mat;

    Matrix();
//    ~Matrix();

    Matrix(int r, int c) {
        rows = r;
        cols = c;
        mat.reserve(r);
        for(int i = 0; i < rows; i++) {
            mat[i].reserve(c);
            for(int j = 0; j < cols; j++) {
                mat[i][j] = 0.0;
            }
        }
        std::cout << mat[1][1] << std::endl;
    }
    
    static Matrix identity(int rows, int cols);
    
    Matrix operator+(const Matrix &mat);
    Matrix operator-(const Matrix &mat);
    Matrix operator*(const Matrix &mat);
    
    Matrix operator*(const float &t);
    
    Matrix invert();
    Matrix transpose();
};

#endif // MATRIX_H
