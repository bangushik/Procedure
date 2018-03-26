#include "matrix2d.h"
#include "matrixDiag.h"

enum type{MATRIX_2D,MATRIX_DIAG};
struct matrix
{
	type key;
	int sum;
	void* obj;
};
matrix* inMatrix(ifstream &ifst);
void MatrixOut(matrix* matr, ofstream & ofst);
void OutMatrDiag(ofstream &ofst, MatrixDiag* matrd);
void MatrSum(matrix* matr);
bool Compare(matrix* m1, matrix* m2, int metod);