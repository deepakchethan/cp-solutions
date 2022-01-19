#include <deque>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
	// allows push_front & pop_front
	// random access is allowed
	deque<int> a;

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


	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}

	cout << endl;

	a.pop_back();
	a.pop_front();

	cout << "After pop_back & pop_front:" << endl;

	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}

	cout << endl;

	cout << "front: " <<  a.front() << endl;
	cout << "back: " << a.back() << endl;

	cout << "At position 2: " << a.at(2) << endl;
	cout << "At position 2 with Iterator begin :" << *(a.begin() + 2) << endl;
	cout << "At position 2 with Iterator end :" << *(a.end() - (a.size() - 2)) << endl;
	cout << "Is empty :" << a.empty() << endl;

	// some constructors

	deque<int> fiveZeros(5, 0);
	for (int i = 0; i < fiveZeros.size(); ++i) {
		cout << fiveZeros[i] << " ";
	}

	cout << endl;

	deque<int> fiveZeros2(fiveZeros);
	for (int i = 0; i < fiveZeros2.size(); ++i) {
		cout << fiveZeros[i] << " ";
	}

	cout << endl;

	a.erase(a.begin() + 2, a.begin() + 4);

	cout << "Print with iterator after erase"<< endl;

	for (deque<int>::iterator i = a.begin(); i != a.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

	a.clear();

	return 0;
}