#include <set>
using std::set;

#include <iostream>
using std::cout;
using std::endl;


int main(void)
{
	set<double> dset;

	dset.insert(1);
	dset.insert(3.14);
	dset.insert(12.2);
	dset.insert(1);
	dset.insert(1.5);

	// 1) Use const iterator notation to print the set
	// Note that the set is sorted (ordered)
	// Note that there are no duplicates
	for (set<double>::const_iterator i = dset.begin(); i != dset.end(); i++)
		cout << *i << endl;

	cout << endl;

	// 2) Use modern C++ notation
	for (const auto i : dset)
		cout << i << endl;

	cout << endl;

	return 0;
}