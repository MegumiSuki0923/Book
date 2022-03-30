#include <iostream>
#include "studentc.h"

using namespace std;

const int pupils = 3;
const int quizzes = 5;

void set(Student &sa, int n);

int main(void)
{
	Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};

	int i;
	for(i = 0; i < pupils; i++)
		set(ada[i], quizzes);

	cout << "\nStudent List: " << endl;
	for(i = 0; i < pupils; i++)
		cout << ada[i].Name() << endl;

	cout << "\nResult List: " << endl;
	for(i = 0; i < pupils; i++)
	{
		cout << ada[i];
		cout << "The average is " << ada[i].Average() << endl;
	}

	return 0;
}

void set(Student &sa, int n)
{
	cout << "Please enter the student's name: ";
	getline(cin, sa);
	cout << "Please enter: " << n << " quiz scores: " << endl;
	for(int i = 0; i < n; i++)
		cin >> sa[i]; //function prototype: double &operator[](int n)
	while(cin.get() != '\n');
}
