	#include "matrix2d.h"
	#include "matrixDiag.h"
	#include "Trgmatr.h"
	enum type{MATRIX_2D,MATRIX_DIAG,TRG_MATR};
	enum printType{STRINGS, COLUMNS, LINE};



	struct matrix
	{
		printType print;
		type key;
		int sum;
		void* obj;
	};
	matrix* InMatrix(ifstream &ifst);
	void MatrixOut(matrix* matr, ofstream & ofst);
	void OutMatrDiag(ofstream &ofst, MatrixDiag* matrd);
	void OutMatrDiagC(ofstream &ofst, MatrixDiag* matrd);
	void OutMatrDiagL(ofstream &ofst, MatrixDiag* matrd);
	void MatrSum(matrix* matr);
	void MatrixOutFilter(matrix* matr, ofstream & ofst, int param);
	int InMethod();
	bool Compare(matrix* m1, matrix* m2, int metod);

