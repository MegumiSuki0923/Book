#include <iostream>
#include "sales.h"

using namespace std;

int main(void)
{
    double vals1[12] = {1100, 1110, 1120, 1130, 1140, 1150, 1160, 1170, 1180, 1190, 1200, 1210};
    double vals2[12] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};

    Sales sales1(1989, vals1, 12);
    LabeledSales sales2("ABC", 2013, vals2, 12);

    try
    {
        cout << "Sales Year = " << sales1.Year() << endl;
        for(int i = 0; i < 12; i++)
        {
            cout << sales1[i] << ' ';
            if(i % 6 == 5)
                cout << endl;
        }

        cout << "LabeledSales Year = " << sales2.Year() << endl;
        cout << "Label: " << sales2.Label() << endl;
        for (int i = 0; i < 12; i++)
        {
            cout << sales2[i] << ' ';
            if(i % 6 == 5)
                cout << endl;
        }
    }
    catch(LabeledSales::nbad_index &bad)
    {
        cout << bad.what() << endl;
        cout << "Company"
    }
    catch(Sales::bad_index &bad)
    {}   

    return 0;
}
