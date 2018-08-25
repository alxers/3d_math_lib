#include "matrix.h"

double& Matrix::operator()(const int &i, const int &j) {
	return this->mat[i][j];
}

const double& Matrix::operator()(const int &i, const int &j) const {
	return this->mat[i][j];
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