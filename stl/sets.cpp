#include <set>
#include <iostream>

using namespace std;

int main() {
	// Only unique elements
	// only push, pop is allowed for most part
	set<int> a;

	a.insert(10);
	a.insert(2);
	a.insert(3);
	a.insert(4);
	a.insert(5);

	cout << "After push: " << a.size() << endl;

	a.erase(a.begin());

	cout << "After eraze: " << a.size() << endl;

	cout << endl;

	cout << "Is empty :" << a.empty() << endl;

	cout << "Find element: " << *a.find(10) << endl;

	cout << "is element present: " << a.count(10) << endl;

	return 0;
}