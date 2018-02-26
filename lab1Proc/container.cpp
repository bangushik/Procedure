#include "container.h"

void push(container &c, matrix* info)
{
	node *x = new node;
	x->info = info;
	if (c.head!=NULL)
	{
		x->next = c.head;
		x->prev = c.tail;
		c.tail->next = x;
		c.head->prev = x;
		c.tail = x;
	}
	else
	{
		c.head = x;
		c.tail = x;
		c.tail->next = x;
		c.head->prev = x;
	}
	c.size++;
};

void dell(container &c)
{
	c.head->prev = c.tail->prev;
	delete c.tail->info;
	delete c.tail;
	c.head->prev->next = c.head;
	c.tail = c.head->prev;
	c.size--;
};
void clear(container &c)
{
	while (c.head->next!=c.head)
	{
		dell(c);
	}
	delete c.head->info;
	delete c.head;
	c.head = NULL;
	c.tail = NULL;
};
void out(container &c, node *n)
{
	if (c.head != NULL)
	{
		n = c.head;
		while (n->next != c.head)
		{
			cout << n->info << endl;
			n = n->next;
		}
		cout << n->info << endl;
	}
	else cout << "container is empty" << endl;
};
void inContainer(container &c, ifstream &ifst)
{
	matrix *matr;
	int count;
	ifst >> count; 
	for (int i = 0;i < count;i++)
	{
		matr = inMatrix(ifst);
		push(c,matr);
	}

};

void ViewCont(container &c, ofstream &ofst )
{
	node* n = c.head;
	if (n == NULL)
	{
		ofst << "Контейнер пуст" << endl;
		return;
	}
	ofst << "В контйнере " << c.size << " эл. " << endl;
	while (n->next!=c.head)
	{
		MatrixOut(n->info, ofst);
		n = n->next;
	}
	MatrixOut(n->info, ofst);
};