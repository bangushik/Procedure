	#include "container.h"

	int main(int argc, char* argv[]) 
	{
		container c;
		int cont=1;
		ifstream ifst(argv[1]);
		ofstream ofst(argv[2]);
	
		if (!ifst)
		{
			cout << "Input file not opened" << endl;
			return 0;
		}
		if (!ofst)
		{
			cout << "Output file not opened" << endl;
			return 0;
		}
		if(argc !=3) 
		{
			cout << "incorrect command line!" << endl;
			exit(1);
		}
		cont=int(InContainer(c, ifst));
		if (cont == 0)
		{
			return 0;
		}
		ViewCont(c, ofst);
		ContainerSort(c);
		ViewCont(c, ofst);
		Clear(c);
		ViewCont(c, ofst);	
		return 0;
	} 