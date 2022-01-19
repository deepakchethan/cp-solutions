#include <queue>
#include <iostream>

using namespace std;

int main() {
	// First in first out, front back are allowed
	// only push, pop is allowed for most part
	queue<int> a;

	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);

	cout << "After push: " << a.size() << endl;

	a.pop();

	cout << "After pop: " << a.size() << endl;

	cout << endl;

	cout << "Is empty :" << a.empty() << endl;

	cout << "front: " << a.front() << endl;

	cout << "back: " << a.back() << endl;

	return 0;
}