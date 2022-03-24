#include "list.h"

int main(void)
{
	List list;
	Items num;

	for(int i = 0; i < 2; i++)
	{
		cout << "Please enter a number: ";
		cin >> num;
		list.add(num);
		list.visit(visit_item);
	}
}
