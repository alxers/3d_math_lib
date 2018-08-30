#include "matrix.h"

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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = m(i, j);
        }
    }

    return *this;
}

Matrix Matrix::operator+(const Matrix &m) {
	Matrix summed_mat(rows, cols, 0.0);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			summed_mat(i, j) = this->mat[i][j] + m(i, j);
		}
	}

	return summed_mat;
}

Matrix Matrix::operator*(const float &t) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            this->mat[i][j] = this->mat[i][j] * t;
        }
    }

    return *this;
}

Matrix Matrix::identity(int rows, int cols) {
    Matrix identity_m(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                identity_m(i, j) = 1.0;
            }
        }
    }

    return identity_m;
}
