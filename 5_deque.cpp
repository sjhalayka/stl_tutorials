#include <deque>
using std::deque;

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
	deque<double_and_int> ddeque;
	double_and_int d;

	d.x = 2.5;
	d.y = 10;
	ddeque.push_back(d); // Also see push_front()

	d.x = 2.5;
	d.y = 7;
	ddeque.push_back(d);

	d.x = 2.5;
	d.y = 7;
	ddeque.push_back(d);

	// 1) Use const iterator notation to print the deque
	// Note that the list is not sorted
	// Note that there can be duplicates
	for (deque<double_and_int>::const_iterator i = ddeque.begin(); i != ddeque.end(); i++)
		cout << i->x << " " << i->y << endl;

	cout << endl;

	// 2) Use modern C++ notation
	for (const auto i : ddeque)
		cout << i.x << " " << i.y << endl;

	cout << endl;

	// 3) Unlike with std::list and std::set, we can use array notation
	// with std::deque
	for (size_t i = 0; i < ddeque.size(); i++)
		cout << ddeque[i].x << " " << ddeque[i].y << endl;

	cout << endl;

	return 0;
}