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
		ofst << matrd->Diagmatr[i] << " " ;
	}
	ofst << endl;
};