#include "dma.h"
#include <iostream>

using namespace std;

int main(void)
{
	baseDMA shirt("Protabelly", 8);
	cout << "Displaying baseDMA object: " << endl;
	cout << shirt;
	cout << "--------------------------------------------" << endl;

	lacksDMA ballon("Blimpo", 4, "red");
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

	//这里使用不是赋值运算符，因为这里在初始化，使用的应该是复制运算符
	hasDMA map2 = map;
	cout << "Displaying hasDMA object(map2): " << endl;
	cout << map2;
	cout << "--------------------------------------------" << endl;

	return 0;
}
