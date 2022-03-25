#include "tabtenn1.h"
#include <iostream>

int main(void)
{
    	using std::cout;
    	using std::endl;

	RatedPlayer rplayer1(1140, "Mallory", "Duck", false);
	rplayer1.Name();
	if(rplayer1.HasTable())
		cout << ": has a table." << endl;
    	else
        	cout << ": hasn't a table." << endl;
	rplayer1.Name();
	cout << ": Rating: " << rplayer1.Rating() << endl;

/*
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable())
        cout << ": has a table." << endl;
    else
        cout << ": hasn't a table." << endl;

    player2.Name();
    if (player2.HasTable())
        cout << ": has a table." << endl;
    else
        cout << ": hasn't a table." << endl;
*/

    	return 0;
}
