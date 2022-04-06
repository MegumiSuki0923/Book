#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <memory>

using namespace std;

struct Review
{
	string title;
	int rating;
	double price;
};

bool FillReview(Review &r);
void ShowReview(const Review &r);
bool worseThan(const shared_ptr<Review> &pt1, const shared_ptr<Review> &pt2);
bool cheaperThan(const shared_ptr<Review> &pt1, const shared_ptr<Review> &pt2);

int main(void)
{
	vector<shared_ptr<Review>> books;	//vector<Review> books;
	Review temp;

	while(FillReview(temp))
	{
		shared_ptr<Review> pd(new Review(temp));
		books.push_back(pd);
	}

	int num = books.size();
	if(num > 0)
	{
		cout << "Choose the way you want to sort the boos: " << endl;
		cout << "1:original order	2:alphabet sort" << endl;
		cout << "3:rating up order	4:rating down order" << endl;
		cout << "5:price up order	6:price down order" << endl;
		cout << "7:quit" << endl;

		int choice;
		while(cin >> choice)
		{
			switch(choice)
			{
				case 1:
					for_each(books.begin(), books.end(), ShowReview);
					break;
				case 2:
					sort(books.begin(), books.end());
					for_each(books.begin(), books.end(), ShowReview);
					break;
				case 3:
					sort(books.begin(), books.end(), worseThan);
					for_each(books.begin(), books.end(), ShowReview);
					break;
				case 4:
					sort(books.begin(), books.end(), worseThan);
					reverse(books.begin(), books.end());
                                       	for_each(books.begin(), books.end(), ShowReview);
                                       	break;
				case 5:
					sort(books.begin(), books.end(), cheaperThan);
                                       	for_each(books.begin(), books.end(), ShowReview);
                                       	break;
				case 6:
					sort(books.begin(), books.end(), cheaperThan);
                                       	reverse(books.begin(), books.end());
                                        for_each(books.begin(), books.end(), ShowReview);
                                        break;
				default:
					cout << "Done!" << endl;
			}
		}
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
	cout << "Enter book's price: ";
	cin>>r.price;

	if(!cin)
		return false;
	while(cin.get() != '\n');
	return true;
}

void ShowReview(const shared_ptr<Review> &pt)
{
	cout << "title: " << pt->title << "\trating: " << pt->rating << "\tprice: " << pt->price << endl;
}

bool operator<(const shared_ptr<Review> &pt1, const shared_ptr<Review> &pt2)
{
	if(pt1->title < pt2->title)
		return true;
	else if(pt1->title == pt2->title && pt1->rating < pt2->rating)
		return true;
	else
		return false;
}

bool worseThan(const shared_ptr<Review> &pt1, const shared_ptr<Review> &pt2)
{
	if(pt1->rating < pt2->rating)
		return true;
	else
		return false;
}

bool cheaperThan(const shared_ptr<Review> &pt1, const shared_ptr<Review> &pt2)
{
	 if(pt1->price < pt2->price)
               	return true;
       	else
               	return false;
}
