#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

#define SIZE 390000

int main(void)
{
        vector<int> numbers(SIZE);
	int count3, count13;
	count3 = count13 = 0;

        //method 1
        srand(time(0));
        generate(numbers.begin(), numbers.end(), rand);

        for_each(numbers.begin(), numbers.end(), [&count3](int x) {count3 += x % 3 == 0;});
        for_each(numbers.begin(), numbers.end(), [&count13](int x) {count13 += x % 13 == 0;});
        cout << "Total " << SIZE << ": \n";
        cout << "Numbers divison by 3 have " << count3 << endl;
        cout << "Numbers divison by 13 have " << count13 << endl;

        return 0;
}
