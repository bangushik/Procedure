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
	if (key == 3)
	{
		matr->key = TRG_MATR;
		matr->obj = (void*)InMatrTrg(ifst);

	}

	return matr;
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
	if (matr->key == TRG_MATR)
	{
		OutTrgMatr(ofst, ((Trgmatr*)matr->obj));
	}

};
