	#include "matrix.h"
	matrix* InMatrix(ifstream &ifst)
	{
		matrix* matr;
		matr = new matrix;
		int key;
		int print;
		ifst >> print;
		if (print != 1 && print != 2 && print != 3)
		{
			print = 1;
		}
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
		if (key != 1 && key != 2 && key != 3)
		{
			cout << "Incottect matrix type" << endl;
			return 0;
		}
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
		if (ifst.fail())
		{
			cout << "Input fail" << endl;
			return 0;
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
			MatrTrgSum((trgmatr*)matr->obj);
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
				OutTrgMatr(ofst, ((trgmatr*)matr->obj));
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
				OutMatrTrgC(ofst, ((trgmatr*)matr->obj));
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
				OutMatrTrgL(ofst, ((trgmatr*)matr->obj));
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
		ofst << "сумма эл-ов :" << matr->sum<<endl;
	};
	int InMethod()
	{
		int param;
		cout << "Viberete matrizi dlya vivoda 1- diag 2-2d 3-Trg" << endl;
		cin >> param;
		return param;
	}

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
