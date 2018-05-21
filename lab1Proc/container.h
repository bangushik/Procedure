#include "matrix.h"
	using namespace std;
	struct node
	{
		matrix* info;
		node* next;
		node* prev;
	};

	struct container
	{
		int size = 0;
		node* head = NULL;
		node* tail = NULL;
	};
	void Push(container &c, matrix* info);
	void Dell(container &c);
	void Clear(container &c);
	void Out(container &c, node *n);
	int InContainer(container &c, ifstream &ifst);
	void ViewCont(container &c, ofstream &ofst);
	void ContainerSort(container &c);
	int GetMethod();



