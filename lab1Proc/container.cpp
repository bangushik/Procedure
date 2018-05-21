	#include "container.h"

	void Push(container &c, matrix* info)
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

	void Dell(container &c)
	{
		c.head->prev = c.tail->prev;
		delete c.tail->info;
		delete c.tail;
		c.head->prev->next = c.head;
		c.tail = c.head->prev;
		c.size--;
	};
	void Clear(container &c)
	{
		while (c.head->next!=c.head)
		{
			Dell(c);
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
	int InContainer(container &c, ifstream &ifst)
	{
		matrix *matr;
		int count;
		ifst >> count; 
		if (count <= 0)
		{
			cout << "Incorrect count of martix " << endl;
			return 0;
		}
		for (int i = 0;i < count;i++)
		{
			matr = InMatrix(ifst);
			if (matr == 0)
			{
				return 0;
			}
			Push(c,matr);
		}

	};
	void ContainerSort(container &c)
	{
		node *cur;
		node *next;
		matrix* temp;
		bool isSorted;
		int metod = GetMethod();
		do
		{
			isSorted = true;
			cur = c.head;
			while (cur->next != c.head)
			{
				next = cur->next;
				if (Compare(cur->info, next->info, metod))
				{
					temp = cur->info;
					cur->info = next->info;
					next->info = temp;
					isSorted = false;
				}
				cur = cur->next;
			}
		} while (!isSorted);
	};
	int GetMethod()
	{
		int metod=0;
		while (!metod)
		{
			cout << "Vvedite naprav sotrirovki 1-vozr 2-ubiv" << endl;
			cin >>metod;
			if (metod != 1 && metod != 2)
			{
				cout << "Incorect metod of sotr" << endl;
				metod = 0;
			}
		}
		return metod;
	}


	void ViewCont(container &c, ofstream &ofst )
	{
		node* n = c.head;
		if (n == NULL)
		{
			ofst << "Контейнер пуст" << endl;
			return;
		}
		ofst << "В контйнере " << c.size << " эл. " << endl;
		int param = InMethod();
		while (n->next!=c.head)
		{
			MatrSum(n->info);
			MatrixOut(n->info, ofst);
			n = n->next;
		}
		MatrSum(n->info);
		MatrixOut(n->info, ofst);
		ofst  << endl << endl;
		ofst << "В контйнере " << c.size << " эл. " << endl;
		 n = c.head;
		while (n->next != c.head)
		{
			MatrixOutFilter(n->info, ofst, param);
			n = n->next;
		}
		MatrixOutFilter(n->info, ofst, param);
	};
