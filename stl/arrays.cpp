#include <array>
#include <iostream>

using namespace std;

int main() {
	// static but with access O(1)
	array<int, 5> a = {1, 2, 3, 4, 5};


	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}

	cout << endl;

	cout << "front: " <<  a.front() << endl;
	cout << "back: " << a.back() << endl;

	cout << "At position 2: " << a.at(2) << endl;
	cout << "Is empty :" << a.empty() << endl;
	return 0;
}