#include <set>
using std::set;

#include <iostream>
using std::cout;
using std::endl;


class double_and_int
{
public:
	double x;
	int y;

	// We must specify how to sort the class when using
	// containers like std::set
	bool operator<(const double_and_int& right) const
	{
		if (right.x > x)
			return true;
		else if (right.x < x)
			return false;

		if (right.y > y)
			return true;
		else if (right.y < y)
			return false;

		// They're equal
		return false;
	}
};


int main(void)
{
	set<double_and_int> dset;
	double_and_int d;

	d.x = 2.5;
	d.y = 10;
	dset.insert(d);

	d.x = 2.5;
	d.y = 7;
	dset.insert(d);

	// 1) Use const iterator notation to print the set
	// Note that the set is autoamatically sorted (ordered)
	// thanks to the overloaded operator< in the double_and_int
	// class definition
	// Note that there are no duplicates
	for (set<double_and_int>::const_iterator i = dset.begin(); i != dset.end(); i++)
		cout << i->x << " " << i->y << endl;

	cout << endl;

	// 2) Use modern C++ notation
	for (const auto i : dset)
		cout << i.x << " " << i.y << endl;

	cout << endl;

	return 0;
}