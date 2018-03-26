#include "container.h"

int main(int argc, char* argv[]) 
{
	container c;
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if(argc !=3) 
	{
		cout << "incorrect command line!" << endl;
		exit(1);
	}
	inContainer(c, ifst);
	ViewCont(c, ofst);
	ContainerSort(c);
	ViewCont(c, ofst);
	clear(c);
	ViewCont(c, ofst);
	
	return 0;
} 