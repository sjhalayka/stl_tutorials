#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;


int main(void)
{
	const size_t x = 10;

	vector<double> dvec;

	dvec.resize(x);

	// 1) Use array notation to set up the vector
	// Static cast is equivalent to casting in C
	for (size_t i = 0; i < x; i++)
		dvec[i] = static_cast<double>(i);

	// 2) Use const iterator notation to print the vector
	// We will get used to using the iterator method
	// because there are some Standard Template Library
	// containers that only have iterators (e.g. set, which
	// we will investigate in separate code)
	for (vector<double>::const_iterator i = dvec.begin(); i != dvec.end(); i++)
		cout << *i << endl;

	cout << endl;

	// 3) Use modern C++ notation
	for (const auto i : dvec)
		cout << i << endl;

	cout << endl;

	return 0;
}