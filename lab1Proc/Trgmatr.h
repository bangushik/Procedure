#include <iostream>
#include <fstream>
using namespace std;
struct Trgmatr
{
	int size;
	int* trg;
	int sum;
};
Trgmatr* InMatrTrg(ifstream &ifst);
void OutTrgMatr(ofstream &ofst, Trgmatr* matr);
void MatrTRGSum(Trgmatr* matr);
void OutMatrTrgC(ofstream &ofst, Trgmatr* matr);
void OutMatrTrgL(ofstream &ofst, Trgmatr* matr);