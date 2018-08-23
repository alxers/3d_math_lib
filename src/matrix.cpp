#include "matrix.h"

Matrix& Matrix::operator=(const Matrix &mat) {
	if (this == &mat) {
		return *this;
	}
	
	
	
}

//Matrix Matrix::operator+(const Matrix &mat) {
//	Matrix summed_mat(rows, cols, 0.0);
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//		}
//	}
//	
//	return summed_mat;
//}