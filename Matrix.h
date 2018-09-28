#ifndef MATRIX_H
#define MATRIX_H

template < typename T, int size >
class Matrix
{
public:
    T value;
    T mat[size][size];
    

    Matrix(){};
//    ~Matrix();

    Matrix(T v) {
        value = v;

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                mat[i][j] = value;
            }
        }
    }
    
    T test(T a);

    static Matrix identity();

    Matrix operator=(const Matrix &m);

    Matrix operator+(const Matrix &m);
    Matrix operator-(const Matrix &m);
    Matrix operator*(const Matrix &m);

    Matrix operator*(const float &t);

    Matrix invert();
    Matrix transpose();

    T& operator()(const int &i, const int &j);

    // This is necessary if we wish to have read-only access to the elements of the matrix.
    // It prevents other const methods from throwing an error when obtaining individual element access.
    const T& operator()(const int &i, const int &j) const;
};

#endif // MATRIX_H
