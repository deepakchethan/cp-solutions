#include <list>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
	// double linked list
	// allows push_front & pop_front
	// random access is not allowed
	list<int> a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_front(5);
	a.push_front(4);
	a.push_front(3);
	a.push_front(2);
	a.push_front(1);


	for (list<int>::iterator i = a.begin(); i != a.end(); ++i) {
		cout << *i << " ";
	}

	cout << endl;

	a.pop_back();
	a.pop_front();

	cout << "After pop_back & pop_front:" << endl;

	for (list<int>::iterator i = a.begin(); i != a.end(); ++i) {
		cout << *i << " ";
	}

	cout << endl;

	cout << "front: " <<  a.front() << endl;
	cout << "back: " << a.back() << endl;
	cout << "At position 0 with Iterator begin :" << *(a.begin()) << endl;
	cout << "Is empty :" << a.empty() << endl;

	a.erase(a.begin());

	cout << "Print with iterator after erase"<< endl;

	for (list<int>::iterator i = a.begin(); i != a.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

	a.clear();

	return 0;
}