#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

struct planet
{
    char name[20];
    double g;
    long population;
};

int main(void)
{
    planet pl;
    const char *file = "planet.dat";

    fstream finout;
    //允许存储、写入，并将文件以二进制的方式保存
    finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
    int ct = 0;
    if (finout.is_open())
    {
        cout << "Here are the current contents of file " << file << endl;
        while (finout.read((char *)&pl, sizeof pl))
            cout << ct++ << ": " << "Name: " << pl.name << "  population: " << setprecision(0) << pl.population << setprecision(1) << "  g: " << pl.g << endl;
        
        if(finout.eof())
            finout.clear();
    }

    cout << "Enter the record number you wish to change: ";
    int rec;
    cin >> rec;
    while(cin.get() != '\n');
    if(rec < 0 || rec >= ct)
    {
        cout << "Out of range!" << endl;
        exit(0);
    }
    streampos place = rec * sizeof pl;
    finout.seekg(place);
    finout.read((char *)&pl, sizeof pl);
    cout << rec << ": " << "Name: " << pl.name << "  population: " << setprecision(0) << pl.population << setprecision(1) << "  g: " << pl.g << endl;
    if (finout.eof())
        finout.clear();

    cout << "Enter planet name: ";
    cin.get(pl.name, 20);
    while(cin.get() != '\n');
    cout << "Enter planet's population: ";
    cin >> pl.population;
    cout << "Enter planet's acceleration graviry: ";
    cin >> pl.g;
    finout.seekp(place);
    finout.write((char *)&pl, sizeof pl);

    cout << "Here are the contents of file " << file << endl;
    ct = 0;
    while (finout.read((char *)&pl, sizeof pl))
        cout << ct++ << ": " << "Name: " << pl.name << "  population: " << setprecision(0) << pl.population << setprecision(1) << "  g: " << pl.g << endl;

    finout.close();

    return 0;
}