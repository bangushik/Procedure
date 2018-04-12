#include "matrix.h"
matrix* inMatrix(ifstream &ifst)
{
	matrix* matr;
	matr = new matrix;
	int key;
	int print;
	ifst >> print;
	if (print == 1)
	{
		matr->print = LINE;


	}
	if (print == 2)
	{
		matr->print = STRINGS;


	}
	if (print == 3)
	{
		matr->print = COLUMNS;


	}
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
	if (matr->key == TRG_MATR)
	{
		MatrTRGSum((Trgmatr*)matr->obj);
	}
};




void MatrixOut(matrix* matr, ofstream & ofst)
{
      if (matr->print == STRINGS)
	{

		if (matr->key == MATRIX_2D)
		{
			OutMatr2d(ofst, ((Matr2d*)matr->obj));
		}
		if (matr->key == MATRIX_DIAG)
		{
			OutMatrDiag(ofst, ((MatrixDiag*)matr->obj));
		}
		if (matr->key == TRG_MATR)
		{
			OutTrgMatr(ofst, ((Trgmatr*)matr->obj));
		}

	}
	if (matr->print == COLUMNS)
	{

		if (matr->key == MATRIX_2D)
		{
			OutMatr2dC(ofst, ((Matr2d*)matr->obj));
		}
		if (matr->key == MATRIX_DIAG)
		{
			OutMatrDiagC(ofst, ((MatrixDiag*)matr->obj));
		}
		if (matr->key == TRG_MATR)
		{
			OutMatrTrgC(ofst, ((Trgmatr*)matr->obj));
		}

		
	}
	if (matr->print == LINE)
	{

		if (matr->key == MATRIX_2D)
		{
			OutMatr2dL(ofst, ((Matr2d*)matr->obj));
		}
		if (matr->key == MATRIX_DIAG)
		{
			OutMatrDiagL(ofst, ((MatrixDiag*)matr->obj));
		}
		if (matr->key == TRG_MATR)
		{
			OutMatrTrgL(ofst, ((Trgmatr*)matr->obj));
		}
	}

	

};

void MatrixOutFilter(matrix* matr, ofstream & ofst,int param)
{
	if (param == 2)
	{
		if (matr->key == MATRIX_2D)
		{
			MatrixOut(matr, ofst);
		}
	}
	if (param == 1)
	{
		if (matr->key == MATRIX_DIAG)
		{
			MatrixOut(matr,ofst);
		}
	}
	if (param == 3)
	{
		if (matr->key ==TRG_MATR)
		{
			MatrixOut(matr,ofst);
		}
	}
};
int InMethod()
{
	int param;
	cout << "Viberete matrizi dlya vivoda 1- diag 2-2d 3-Trg" << endl;
	cin >> param;
	return param;
}
