#include "string.h"
#include <iostream>

void callme1(const StringBad &sb);
void callme2(const StringBad sb);

int main(void)
{
	StringBad headline1("Hello world");
	StringBad headline2("Good morning");
	StringBad sports("I love you!");

	cout << "headline1: " << headline1 << endl;
	cout << "headline2: " << headline2 << endl;
	cout << "sports: " << sports << endl;

	callme1(headline1);
	callme2(headline2);

	return 0;
}

void callme1(const StringBad &sb)
{
	cout << "String passed by reference: " << sb << endl;
}

void callme2(const StringBad sb)
{
	cout << "String passed by value: " << sb << endl;
}
