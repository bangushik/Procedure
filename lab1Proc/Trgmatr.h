	#include <iostream>
	#include <fstream>
	using namespace std;
	struct trgmatr
	{
		int size;
		int* trg;
	};
	trgmatr* InMatrTrg(ifstream &ifst);
	void OutTrgMatr(ofstream &ofst, trgmatr* matr);
	int MatrTrgSum(trgmatr* matr);
	void OutMatrTrgC(ofstream &ofst, trgmatr* matr);
	void OutMatrTrgL(ofstream &ofst, trgmatr* matr);