#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

class Matrix
{
public:
    int rows, cols;
	double values;
    std::vector<std::vector<double> > mat;

    Matrix();
//    ~Matrix();

    Matrix(int r, int c, double v = 0.0) {
        rows = r;
        cols = c;
		values = v;
        mat.reserve(rows);
        for(int i = 0; i < rows; i++) {
            mat[i].reserve(cols);
            for(int j = 0; j < cols; j++) {
                mat[i][j] = v;
            }
        }
        std::cout << mat[1][1] << std::endl;
    }
    
    static Matrix identity(int rows, int cols);
	
	Matrix& operator=(const Matrix &mat);
    
    Matrix operator+(const Matrix &mat);
    Matrix operator-(const Matrix &mat);
    Matrix operator*(const Matrix &mat);
    
    Matrix operator*(const float &t);
    
    Matrix invert();
    Matrix transpose();
};

#endif // MATRIX_H
