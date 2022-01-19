#include <queue>
#include <iostream>

using namespace std;

int main() {
	// Always have max element in the front like max heap & min heap
	// only push, pop is allowed for most part
	priority_queue<int> a;

	// min heap
	priority_queue<int, vector<int>, greater<int> > minHeap;

	a.push(10);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);

	cout << "After push: " << a.top() << endl;

	a.pop();

	cout << "After pop: " << a.top() << endl;

	cout << endl;

	cout << "Is empty :" << a.empty() << endl;

	cout << "front: " << a.top() << endl;

	return 0;
}