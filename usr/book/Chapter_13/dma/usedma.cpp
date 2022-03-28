#include <iostream>
#include "dma.h"

using namespace std;

int main(void)
{
	baseDMA shirt("Protabelly", 8);
	cout << "Displaying baseDMA object: " << endl;
	cout << shirt;
	cout << "--------------------------------------------" << endl;

	lacksDMA ballon("Blimpo",4 , "red");
	cout << "Displaying lacksDMA object(ballon): " << endl;
	cout << ballon;
	cout << "--------------------------------------------" << endl;

	lacksDMA ballon2(ballon);
	cout << "Displaying lacksDMA object(ballon2): " << endl;
        cout << ballon2;
        cout << "--------------------------------------------" << endl;

	hasDMA map("Keys", 5, "Mercator");
	cout << "Displaying hasDMA object: " << endl;
	cout << map;
	cout << "--------------------------------------------" << endl;

	//
	hasDMA map2 = map;
	cout << "Displaying hasDMA object: " << endl;
        cout << map;
        cout << "--------------------------------------------" << endl;

  	return 0;
}

