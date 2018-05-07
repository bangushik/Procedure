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
void push(container &c, matrix* info);
void dell(container &c);
void clear(container &c);
void out(container &c, node *n);
int inContainer(container &c, ifstream &ifst);
void ViewCont(container &c, ofstream &ofst);
void ContainerSort(container &c);
int GetMethod();



