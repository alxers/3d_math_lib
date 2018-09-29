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

// Impltementation

template < typename T, int size >
T Matrix<T, size>::test(T a)
{
    return a;
}

template < typename T, int size >
T& Matrix<T, size>::operator()(const int &i, const int &j)
{
	return this->mat[i][j];
}

template < typename T, int size >
const T& Matrix<T, size>::operator()(const int &i, const int &j) const
{
	return this->mat[i][j];
}

template < typename T, int size >
Matrix<T, size> Matrix<T, size>::operator=(const Matrix<T, size> &m)
{
    if (this == &m) {
        return *this;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            mat[i][j] = m(i, j);
        }
    }

    return *this;
}

template < typename T, int size >
Matrix<T, size> Matrix<T, size>::operator+(const Matrix<T, size> &m)
{
    Matrix<T, size> result_mat(0.0);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result_mat(i, j) = mat[i][j] + m(i, j);
        }
    }

    return result_mat;
}

template < typename T, int size >
Matrix<T, size> Matrix<T, size>::operator*(const Matrix<T, size> &m)
{
    Matrix<T, size> result_mat;
    T sum;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum += mat[i][k] * m(k, j);
                //result_mat(i, j) += mat[i][k] * m(k, j);
            }
            result_mat(i, j) = sum;
        }
    }

    return result_mat;
}

template < typename T, int size >
Matrix<T, size> Matrix<T, size>::operator*(const float &t)
{
    Matrix<T, size> result_mat;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result_mat(i, j) = mat[i][j] * t;
        }
    }

    return result_mat;
}

template < typename T, int size >
Matrix<T, size> Matrix<T, size>::identity()
{
    Matrix<T, size> result_mat;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                result_mat(i, j) = 1.0;
            }
        }
    }

    return result_mat;
}

#endif /* MATRIX_H */

