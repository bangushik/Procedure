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
		matr->sum=Matr2Sum(((Matr2d*)matr->obj));
	}
	if (matr->key == MATRIX_DIAG)
	{
		matr->sum=MatrDiagSum(((MatrixDiag*)matr->obj));
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
	ofst << "сумма эл-ов :" << matr->sum<<endl;
};
bool Compare(matrix* m1, matrix* m2, int metod)
{
	if (metod == 1)
	{
		return (m1->sum > m2->sum);
	}
	if (metod == 2)
	{
		return (m1->sum < m2->sum);
	}
}
