#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Review
{
	string title;
	int rating;
};

bool FillReview(Review &r);
void ShowReview(const Review &r);

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
		for(int i = 0; i < num; i++)
			ShowReview(books[i]);

		cout << "Use iterator:" << endl;
		vector<Review>::iterator pr;
		for(pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);

		vector<Review> oldlist(books);
		if(num > 3)
		{
			cout << "After erasing:" << endl;
			oldlist.erase(oldlist.begin() + 1, oldlist.begin() + 3);
			for(pr = oldlist.begin(); pr != oldlist.end(); pr++)
				ShowReview(*pr);

			cout << "After insert:" << endl;
                	oldlist.insert(oldlist.begin(), books.begin() + 1, books.begin() + 2);
                	for(pr = oldlist.begin(); pr != oldlist.end(); pr++)
                        	ShowReview(*pr);
		}

		books.swap(oldlist);
		cout << "After swap:" << endl;
		for(pr = oldlist.begin(); pr != oldlist.end(); pr++)
                                ShowReview(*pr);
	}


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
