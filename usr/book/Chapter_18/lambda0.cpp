#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

#define SIZE1 39
#define SIZE2 3900
#define SIZE3 390000

bool f3(int x) {return x % 3 == 0;}
bool f13(int x) {return x % 13 == 0;}

class f_mod
{
        private:
                int dv;
        public:
                f_mod(int i = 1) : dv(i) {}
                bool operator()(int i) {return i % dv == 0;}
};

int main(void)
{
        vector<int> numbers(SIZE1);

        //method 1
        srand(time(0));
        generate(numbers.begin(), numbers.end(), rand);

        int count3 = count_if(numbers.begin(), numbers.end(), f3);
        int count13 = count_if(numbers.begin(), numbers.end(), f13);
        cout << "Total " << SIZE1 << ": \n";
        cout << "Numbers divison by 3 have " << count3 << endl;
        cout << "Numbers divison by 13 have " << count13 << endl;

        //method 2
        numbers.resize(SIZE2);
        generate(numbers.begin(), numbers.end(), rand);
        count3 = count_if(numbers.begin(), numbers.end(), f_mod(3));
        count13 = count_if(numbers.begin(), numbers.end(), f_mod(13));
        cout << "Total " << SIZE2 << ": \n";
        cout << "Numbers divison by 3 have " << count3 << endl;
        cout << "Numbers divison by 13 have " << count13 << endl;

        //method 3
        numbers.resize(SIZE3);
        generate(numbers.begin(), numbers.end(), rand);
        count3 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 3 == 0;});
        count13 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 13 == 0;});
        cout << "Total " << SIZE3 << ": \n";
        cout << "Numbers divison by 3 have " << count3 << endl;
        cout << "Numbers divison by 13 have " << count13 << endl;

        return 0;
}
