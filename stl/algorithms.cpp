#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	cout << "Finding 2: " << binary_search(v.begin(), v.end(), 2) << endl;


	cout << "lower bound 2: " << lower_bound(v.begin(), v.end(), 2) - v.begin()<< endl;

	cout << "upper bound 2: " << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;


        // check out the rest like reverse, rotate, min, max etc

}