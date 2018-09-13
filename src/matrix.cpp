#include "matrix.h"
#include <iostream>

double& Matrix::operator()(const int &i, const int &j) {
	return this->mat[i][j];
}

const double& Matrix::operator()(const int &i, const int &j) const {
	return this->mat[i][j];
}

Matrix Matrix::operator=(const Matrix &m) {
    if (this == &m) {
        return *this;
    }

    mat.reserve(m.rows);
    for (int i = 0; i < m.rows; i++) {
        mat[i].reserve(m.cols);
        for (int j = 0; j < m.cols; j++) {
            mat[i][j] = m(i, j);
        }
    }

    return *this;
}

Matrix Matrix::operator+(const Matrix &m) {
	Matrix result_mat(rows, cols, 0.0);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			result_mat(i, j) = mat[i][j] + m(i, j);
		}
	}

	return result_mat;
}

Matrix Matrix::operator*(const Matrix &m) {
    if (cols != m.rows) {
        // should throw an error
    }

    Matrix result_mat(m.cols, rows);
    int sum;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum = 0;
            for (int k = 0; k < rows; k++) {
                sum += mat[i][k] * m(k, j);
                //result_mat(i, j) += mat[i][k] * m(k, j);
            }
            std::cout << "i, j " << i << j << " sum " << sum << std::endl;
            result_mat(i, j) = sum;
        }
    }

    return result_mat;
}

Matrix Matrix::operator*(const float &t) {
    Matrix result_mat(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result_mat(i, j) = mat[i][j] * t;
        }
    }

    return result_mat;
}

Matrix Matrix::identity(int rows, int cols) {
    Matrix result_mat(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                result_mat(i, j) = 1.0;
            }
        }
    }

    return result_mat;
}
