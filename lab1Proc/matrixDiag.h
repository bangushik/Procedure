#include <iostream>
#include <fstream>
using namespace std;
struct MatrixDiag
{
	int size;
	int* Diagmatr;
	int sum;
};
MatrixDiag* InMatrDiag(ifstream &ifst);
void MatrDiagSum(MatrixDiag* matr);

