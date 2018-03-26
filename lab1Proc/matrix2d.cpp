#include "matrix2d.h"
Matr2d* InMatr2d(ifstream &ifst)
{
	Matr2d *matr = new Matr2d;
	ifst >> matr->strings;
	ifst >> matr->collums;
	matr->matr = new int*[matr->strings];
	for (int i = 0; i < matr->strings; i++)
	{
		matr->matr[i] = new int[matr->collums];
		for (int  j = 0; j < matr->collums; j++)
		{
			ifst >> matr->matr[i][j];
		}

	}
	return matr;
};
void OutMatr2d(ofstream &ofst, Matr2d* matr2)
{
	ofst << "Это двухмерная матрица: ";
	ofst << matr2->strings << "x" << matr2->collums << endl;
	for (int i = 0; i < matr2->strings; i++)
	{
		for (int j = 0; j < matr2->collums; j++)
		{
			ofst << matr2->matr[i][j]<< " ";
		}
		ofst << endl;
	}
};
int Matr2Sum(Matr2d*matrix)
{
	int sum = 0;
	for (int i = 0; i < matrix->strings; i++)
	{
		for (int j = 0; j < matrix->collums; j++)
		{
			sum = sum + matrix->matr[i][j];
		}
	}
	return sum;
};