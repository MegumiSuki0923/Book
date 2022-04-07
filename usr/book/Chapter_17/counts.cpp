#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		cout << "Usage: " << argv[0] << " filename(s)" << endl;
		exit(0);
	}

	long total = 0;
	long counts = 0;
	char ch;

	ifstream fin;
	for(int i = 1; i < argc; i++)
	{
		fin.open(argv[i]);
		if(!fin.is_open())
		{
			cout << "Can't open the file " << argv[i] << endl;
			fin.clear();
			continue;
		}
		counts = 0;
		while(fin.get(ch))
			counts++;
		total += counts;
		cout << "The file " << argv[i] << " have " << counts << " characters." << endl;
		fin.clear();
		fin.close();
	}

	cout << "There are " << total << " character." << endl;

	return 0;
}
