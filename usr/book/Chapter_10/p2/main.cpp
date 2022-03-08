#include "p2.h"

int main(void)
{
	Person one;
	Person two("Rick");
	Person three("Miheal", "jackson");

	one.Show();
	one.FormalShow();

	cout << endl;
	two.Show();
	two.FormalShow();

	cout << endl;
	three.Show();
	three.FormalShow();

	return 0;
}
