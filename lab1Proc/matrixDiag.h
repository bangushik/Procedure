#include <iostream>
#include <fstream>
using namespace std;
struct MatrixDiag
{
	int size;
	int* Diagmatr;
};
MatrixDiag* InMatrDiag(ifstream &ifst);
int MatrDiagSum(MatrixDiag* matr);


