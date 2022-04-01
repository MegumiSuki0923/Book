#include <iostream>
#include "queue.h"

using namespace std;

int main(void)
{
	Queue<Worker *> qw(3);

	Worker w1;
	w1.Set();
	w1.Show();
	qw.enqueue(&w1);
	cout << "Now queue has " << qw.queuecount() << " item(s)" << endl;

/*
	Worker w2;
        w2.Set();
        w2.Show();
        qw.enqueue(&w1);
        cout << "Now queue has " << qw.queuecount() << " item(s)" << endl;

	Worker w3;
        w3.Set();
        w3.Show();
        qw.enqueue(&w3);
        cout << "Now queue has " << qw.queuecount() << " item(s)" << endl;
*/

	return 0;
}
