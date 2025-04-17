#include <list>
using std::list;

#include <iostream>
using std::cout;
using std::endl;


class double_and_int
{
public:
	double x;
	int y;
};


int main(void)
{
	list<double_and_int> dlist;
	double_and_int d;

	d.x = 2.5;
	d.y = 10;
	dlist.push_back(d); // Also see push_front()

	d.x = 2.5;
	d.y = 7;
	dlist.push_back(d);

	d.x = 2.5;
	d.y = 7;
	dlist.push_back(d);

	// 1) Use const iterator notation to print the list
	// Note that the list is not sorted
	// Note that there can be duplicates
	for (list<double_and_int>::const_iterator i = dlist.begin(); i != dlist.end(); i++)
		cout << i->x << " " << i->y << endl;

	cout << endl;

	// 2) Use modern C++ notation
	for (const auto i : dlist)
		cout << i.x << " " << i.y << endl;

	cout << endl;

	return 0;
}