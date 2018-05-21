	#include "matrixDiag.h"
	MatrixDiag* InMatrDiag(ifstream &ifst)
	{
		MatrixDiag *matr = new MatrixDiag;
		ifst >> matr->size;
		matr->Diagmatr = new int[matr->size];
		for (int i = 0; i < matr->size; i++)
		{
			ifst >> matr->Diagmatr[i];
		}
		return matr;

	}
	void OutMatrDiag(ofstream &ofst, MatrixDiag* matrd)
	{
		ofst << "Это диагональная матрица: ";
		ofst << matrd->size << endl;
		for (int i = 0; i < matrd->size; i++)
		{
			for (int j = 0;j < matrd->size;j++)
			{
				if (i == j)
				{
					ofst << matrd->Diagmatr[i] << " ";
				}
				else
				{
					ofst<<"0 ";
				}
			
			}
			ofst << endl;
		}
		ofst << endl;
	};
	void OutMatrDiagC(ofstream &ofst, MatrixDiag* matrd)
	{
		ofst << "Это диагональная матрица: ";
		ofst << matrd->size << endl;
		for (int i = 0; i < matrd->size; i++)
		{
			for (int j = 0;j < matrd->size;j++)
			{
				if (i == j)
				{
					ofst << matrd->Diagmatr[i] << " ";
				}
				else
				{
					ofst << "0 ";
				}

			}
			ofst << endl;
		}
		ofst << endl;
	};
	void OutMatrDiagL(ofstream &ofst, MatrixDiag* matrd)
	{
		ofst << "Это диагональная матрица: ";
		ofst << matrd->size << endl;
		for (int i = 0; i < matrd->size; i++)
		{
			for (int j = 0;j < matrd->size;j++)
			{
				if (i == j)
				{
					ofst << matrd->Diagmatr[i] << " ";
				}
				else
				{
					ofst << "0 ";
				}

			}

		}
		ofst << endl;
	};

	int MatrDiagSum(MatrixDiag* matrix)
	{
		int sum = 0;
		for (int i = 0; i < matrix->size; i++)
		{
			sum = sum + matrix->Diagmatr[i];
		}
		return sum;
	}