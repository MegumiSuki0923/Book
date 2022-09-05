#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Review
{
	string title;
	int rating;
};

bool FillReview(Review &r);
void ShowReview(const Review &r);
bool worseThan(const Review &r1, const Review &r2);

int main(void)
{
	vector<Review> books;
	Review temp;

	while(FillReview(temp))
		books.push_back(temp);

	int num = books.size();
	if(num > 0)
	{
		cout << "You entered the following:" << endl;
		for_each(books.begin(), books.end(), ShowReview);

		cout << "Use iterator:" << endl;
		vector<Review>::iterator pr;
		for_each(books.begin(), books.end(), ShowReview);

		vector<Review> oldlist(books);
		if(num > 3)
		{
			cout << "After erasing:" << endl;
			oldlist.erase(oldlist.begin() + 1, oldlist.begin() + 3);
			for_each(oldlist.begin(), oldlist.end(), ShowReview);

			cout << "After insert:" << endl;
                	oldlist.insert(oldlist.begin(), books.begin() + 1, books.begin() + 2);
                	for_each(oldlist.begin(), oldlist.end(), ShowReview);
		}

		books.swap(oldlist);
		cout << "After swap:" << endl;
		for_each(oldlist.begin(), oldlist.end(), ShowReview);

		random_shuffle(books.begin(), books.end());
		cout << "After random_shuffle:" << endl;
		for_each(books.begin(), books.end(), ShowReview);

		cout << "After sorting1:" << endl;
		sort(books.begin(), books.end());
		for_each(books.begin(), books.end(), ShowReview);

		cout << "After sorting2:" << endl;
		sort(books.begin(), books.end(), worseThan);
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "Done!" << endl;

	return 0;
}

bool FillReview(Review &r)
{
	cout << "Enter book title (enter quit to quit): ";
	getline(cin, r.title);
	if(r.title == "quit")
		return false;
	cout << "Enter book rating: ";
	cin >> r.rating;
	if(!cin)
		return false;
	while(cin.get() != '\n');
	return true;
}

void ShowReview(const Review &r)
{
	cout << "title: " << r.title << "\trating: " << r.rating << endl;
}

bool operator<(const Review &r1, const Review &r2)
{
	if(r1.title < r2.title)
		return true;
	else if(r1.title == r2.title && r1.rating < r2.rating)
		return true;
	else
		return false;
}

bool worseThan(const Review &r1, const Review &r2)
{
	if(r1.rating < r2.rating)
		return true;
	else if(r1.rating == r2.rating && r1.title < r2.title)
		return true;
	else
		return false;
}
