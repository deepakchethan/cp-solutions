#include <map>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
	// just a map
	// only push, pop is allowed for most part
	map<int, string> m;

	m[1] = "Deepak";
	m[2] = "is";

	m[3] = "me";


	cout << "Has me : " << m.count(3) << endl;

	cout << m[3] << endl;

	m.erase(3);

	cout << "After eraze" << endl;


	for (map<int,string>::iterator i = m.begin(); i != m.end(); ++i) {
		cout << (*i).first << " " << (*i).second << endl;
	}
	cout << endl;



	return 0;
}