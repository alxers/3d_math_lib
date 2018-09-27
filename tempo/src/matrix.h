#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix
{
public:
    int rows, cols;
	double value;
    std::vector<std::vector<double> > mat;

    Matrix(){};
//    ~Matrix();

    Matrix(int r, int c, double v = 0.0) {
        rows = r;
        cols = c;
		value = v;
        mat.reserve(rows);
        for(int i = 0; i < rows; i++) {
            mat[i].reserve(cols);
            for(int j = 0; j < cols; j++) {
                mat[i][j] = v;
            }
        }
    }

    static Matrix identity(int rows, int cols);

	Matrix operator=(const Matrix &mat);

    Matrix operator+(const Matrix &mat);
    Matrix operator-(const Matrix &mat);
    Matrix operator*(const Matrix &mat);

    Matrix operator*(const float &t);

    Matrix invert();
    Matrix transpose();

	double& operator()(const int &i, const int &j);
	// This is necessary if we wish to have read-only access to the elements of the matrix.
	// It prevents other const methods from throwing an error when obtaining individual element access.
	const double& operator()(const int &i, const int &j) const;
};

#endif // MATRIX_H
