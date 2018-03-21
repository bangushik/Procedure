#include "matrix2d.h"
#include "matrixDiag.h"
#include "Trgmatr.h"
enum type{MATRIX_2D,MATRIX_DIAG,TRG_MATR};

struct matrix
{
	type key;
	void* obj;
};
matrix* inMatrix(ifstream &ifst);
void MatrixOut(matrix* matr, ofstream & ofst);
void OutMatrDiag(ofstream &ofst, MatrixDiag* matrd);