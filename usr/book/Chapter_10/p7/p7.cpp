#include "p7.h"

Plorg::Plorg(const char *name, int CI)
{
	strcpy(m_name, name);
	m_CI = CI;
}

void Plorg::show() const
{
	cout << "The name is " << m_name << endl;
	cout << "The CI is " << m_CI << endl;
}
