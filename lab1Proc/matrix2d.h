	#include <iostream>
	#include <fstream>

	using namespace std;
	struct Matr2d
	{
		int collums;
		int strings;
		int** matr;
	};

	Matr2d* InMatr2d(ifstream &ifst);
	void OutMatr2d( ofstream &ofst, Matr2d* matr);
	void OutMatr2dC(ofstream &ofst, Matr2d* matr);
	void OutMatr2dL(ofstream &ofst, Matr2d* matr);
	int Matr2Sum(Matr2d* matr);

