	#include "Trgmatr.h"
	trgmatr* InMatrTrg(ifstream &ifst)
	{
		trgmatr *matr = new trgmatr;
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
	};


	void OutTrgMatr(ofstream &ofst, trgmatr* matr)
	{
		ofst << "��� ����������� �������: ";
		ofst << "������ " << matr->size<<" "<<"X "<< matr->size << endl;
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
	void OutMatrTrgC(ofstream &ofst, trgmatr* matr)
	{
		ofst << "��� ����������� �������: ";
		ofst << "������ " << matr->size << " " << "X " << matr->size << endl;
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
	void OutMatrTrgL(ofstream &ofst, trgmatr* matr)
	{
		ofst << "��� ����������� �������: ";
		ofst << "������ " << matr->size << " " << "X " << matr->size << endl;
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
	int MatrTrgSum(trgmatr*matr)
	{
		int sum = 0;
		for (int i = 0; i < matr->size; i++)
		{
		
				sum = sum + matr->trg[i];
		
		}
		return sum;
	}