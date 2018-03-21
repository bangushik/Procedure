#include <iostream>
#include <fstream>

using namespace std;
struct Matr2d
{
	int collums;
	int strings;
	int** matr;
	int sum;
};

Matr2d* InMatr2d(ifstream &ifst);
void OutMatr2d( ofstream &ofst, Matr2d* matr);
void Matr2Sum(Matr2d* matr);