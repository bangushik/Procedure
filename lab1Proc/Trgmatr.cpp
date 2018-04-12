#include "Trgmatr.h"
Trgmatr* InMatrTrg(ifstream &ifst)
{
	Trgmatr *matr = new Trgmatr;
	ifst >> matr->size;
	int koll = (matr->size + 1)*(matr->size / 2)+10;
	matr->trg = new int[koll];
	int k = 0;
	int temp;
	for (int i = 0; i < matr->size; i++)
	{
		for (int j = 0; j < matr->size; j++)
		{
			ifst >> temp;
			if (j>=i)
			{
				matr->trg[k] = temp;
			}
			k++;
		}
		
	}
	return matr;

}


void OutTrgMatr(ofstream &ofst, Trgmatr* matr)
{
	ofst << "Это треугольная матрица: ";
	ofst << "размер " << matr->size<<" "<<"X "<< matr->size << endl;
	int k = 0;
	for (int i = 0; i <matr->size; i++)
	{
		for (int j = 0; j <matr->size ; j++)
		{
			if (j>=i)
			{
				ofst << matr->trg[k] << " ";
				

			}
			else
			{
				ofst << "0" << " ";
			}
			k++;
		}
		ofst << endl;
	}
		ofst << endl;
	
};
void OutMatrTrgC(ofstream &ofst, Trgmatr* matr)
{
	ofst << "Это треугольная матрица: ";
	ofst << "размер " << matr->size << " " << "X " << matr->size << endl;
	int k = 0;
	for (int i = 0; i <matr->size; i++)
	{
		for (int j = 0; j <matr->size; j++)
		{
			if (j >= i)
			{
				ofst << matr->trg[k] << " ";


			}
			else
			{
				ofst << "0" << " ";
			}
			k++;
		}
		ofst << endl;
	}
	ofst << endl;

};
void OutMatrTrgL(ofstream &ofst, Trgmatr* matr)
{
	ofst << "Это треугольная матрица: ";
	ofst << "размер " << matr->size << " " << "X " << matr->size << endl;
	int k = 0;
	for (int i = 0; i <matr->size; i++)
	{
		for (int j = 0; j <matr->size; j++)
		{
			if (j >= i)
			{
				ofst << matr->trg[k] << " ";


			}
			else
			{
				ofst << "0" << " ";
			}
			k++;
		}
	}

};
void MatrTRGSum(Trgmatr*matr)
{
	matr->sum = 0;
	for (int i = 0; i < matr->size; i++)
	{
		
			matr->sum = matr->sum + matr->trg[i];
		
	}
}