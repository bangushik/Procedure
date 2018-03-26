#include "matrix.h"
matrix* inMatrix(ifstream &ifst)
{
	matrix* matr;
	matr = new matrix;
	int key;
	ifst >> key;
	if (key == 1)
	{
		matr->key = MATRIX_2D;
		matr->obj = (void*)InMatr2d(ifst);

	}
	if (key == 2 )
	{
		matr->key = MATRIX_DIAG;
		matr->obj = (void*)InMatrDiag(ifst);

	}

	return matr;
};
void MatrixOut(matrix* matr, ofstream & ofst)
{
		if (matr->key == MATRIX_2D)
		{
			OutMatr2d(ofst, ((Matr2d*)matr->obj));
		}
		if (matr->key == MATRIX_DIAG)
		{
			OutMatrDiag(ofst, ((MatrixDiag*)matr->obj));
		}
};

void MatrixOutFilter(matrix* matr, ofstream & ofst,int param)
{
	if (param == 2)
	{
		if (matr->key == MATRIX_2D)
		{
			OutMatr2d(ofst, ((Matr2d*)matr->obj));
		}
	}
	if (param == 1)
	{
		if (matr->key == MATRIX_DIAG)
		{
			OutMatrDiag(ofst, ((MatrixDiag*)matr->obj));
		}
	}
};
int InMethod()
{
	int param;
	cout << "Viberete matrizi dlya vivoda 1- diag 2-2d" << endl;
	cin >> param;
	return param;
}
