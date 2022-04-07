#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    char ch;

    fstream fout;
    fout.open(argv[1]);

    if(fout.is_open())
    {
        cout << "Enter the string you want to copy to other file:";
        while(cin.get(ch) && ch != EOF)
            fout << ch;
        fout.close();
    }
    else
    {
        cout << "Can't open or creat file." << endl;
        exit(0);
    }

    return 0;
}