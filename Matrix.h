#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

// Correct way ?
// template < typename T, int size >
template < typename T >
class Matrix
{
public:
    int size;
    T value;
    T mat[][0];
    

    Matrix(){};
//    ~Matrix();

    Matrix(int s, T v) {
        size = s;
        value = v;

        mat[size][size];
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                mat[i][j] = value;
            }
        }
    }

    static Matrix identity(int size);

    Matrix operator=(const Matrix &mat);

    Matrix operator+(const Matrix &mat);
    Matrix operator-(const Matrix &mat);
    Matrix operator*(const Matrix &mat);

    Matrix operator*(const float &t);

    Matrix invert();
    Matrix transpose();

    T& operator()(const int &i, const int &j);

    // This is necessary if we wish to have read-only access to the elements of the matrix.
    // It prevents other const methods from throwing an error when obtaining individual element access.
    const T& operator()(const int &i, const int &j) const;
};

#endif // MATRIX_H
