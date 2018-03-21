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
void MatrSum(matrix* matr)
{
	if (matr->key == MATRIX_2D)
	{
		Matr2Sum(((Matr2d*)matr->obj));
	}
	if (matr->key == MATRIX_DIAG)
	{
		MatrDiagSum(((MatrixDiag*)matr->obj));
	}
	
};

void MatrixOut(matrix* matr, ofstream & ofst)
{

	if (matr->key== MATRIX_2D)
	{
		OutMatr2d(ofst,((Matr2d*)matr->obj));
	}
	if (matr->key==MATRIX_DIAG)
	{
		OutMatrDiag(ofst, ((MatrixDiag*)matr->obj));
	}
	
}

