#include "matrix2d.h"
#include "matrixDiag.h"

enum type{MATRIX_2D,MATRIX_DIAG};

struct matrix
{
	type key;
	void* obj;
};
matrix* inMatrix(ifstream &ifst);
void MatrixOut(matrix* matr, ofstream & ofst);
void MatrixOutFilter(matrix* matr, ofstream & ofst, int param);
void OutMatrDiag(ofstream &ofst, MatrixDiag* matrd);
int InMethod();