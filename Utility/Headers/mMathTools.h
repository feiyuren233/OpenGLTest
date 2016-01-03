/*
 * mMathTools.h
 *
 *  Created on: Sep 19, 2015
 *      Author: renfeiyu
 */

#ifndef HEADERS_MMATHTOOLS_H_
#define HEADERS_MMATHTOOLS_H_
#include <stdio.h>

//Defination of Matrix
template<int dimr, int dimc, typename T>
class Matrix {
private:
	T entries[dimr][dimc];
	int dimR, dimC;
protected:

public:
	//Constructors

	//set to identity matrix
	Matrix() {
		dimR = dimr, dimC = dimc;
		for (int i = 0; i < dimr; i++) {
			for (int j = 0; j < dimc; j++) {
				if (i == j)
					entries[i][j] = 1;
				else
					entries[i][j] = 0;
			}
		}
	}

	Matrix(T data[dimr][dimc]) {
		dimR = dimr, dimC = dimc;
		for (int i = 0; i < dimR; i++) {
			for (int j = 0; j < dimC; j++) {
				entries[i][j] = data[i][j];
			}
		}
	}

	//Matrix(const Matrix<dimr, dimc, T>& other) =default;

	//Overload operators
	T& operator()(int row, int col) {
		return entries[row][col];
	}

	Matrix operator*(Matrix<dimc, dimr, T> other) {
		Matrix<dimr, dimc, T> result;
		for (int i = 0; i < dimR; i++) {
			for (int j = 0; j < other.dimC; j++) {
				result(i,j)=0;
				for (int k = 0; k < dimC; k++)
					result(i, j) += entries[i][k] * other(j, k);
			}
		}
		return result;
	}

	//...
	void loadIdentity() {
		for (int i = 0; i < dimR; i++) {
			for (int j = 0; j < dimC; j++) {
				if (i == j)
					entries[i][j] = 1;
				else
					entries[i][j] = 0;
			}
		}
	}

	void loadZero() {
		for (int i = 0; i < dimR; i++) {
			for (int j = 0; j < dimC; j++) {
				entries[i][j] = 0;
			}
		}
	}

	void printMatrix() {
		for (int i = 0; i < dimr; i++) {
			for (int j = 0; j < dimc; j++) {
				printf("%6.3lf",entries[i][j]);
			}
		printf("\n");
		}
	}
};
typedef Matrix<3, 3, float> Matrix33f;
typedef Matrix<4, 4, float> Matrix44f;


template<int dim, typename T>
class Vector {
private:
	T entries[dim];
protected:

public:
	Vector() {

	}
	Vector(T data[dim]) {
		for (int i = 0; i < dim; i++)
			entries[i] = data[i];

	}

};
#endif /* HEADERS_MMATHTOOLS_H_ */
