#include <map>
using std::map;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;


int main(void)
{
	map<string, long unsigned int> phone_book;

	phone_book["Bob"] = 987654321;
	phone_book["Alice"] = 123456789;
	phone_book["Cassie"] = 787878878;

	// 2) Use const iterator notation to print the map
	// Note that the map is sorted (ordered) based on name
	for (map<string, long unsigned int>::const_iterator i = phone_book.begin(); i != phone_book.end(); i++)
		cout << i->first << " -> " << i->second << endl;

	cout << endl;

	// 3) Use modern C++ notation
	for (const auto i : phone_book)
		cout << i.first << " -> " << i.second << endl;

	cout << endl;

	return 0;
}