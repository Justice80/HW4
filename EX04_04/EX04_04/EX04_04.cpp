#include <iostream>
#include <string>
#include "rect.h"

using namespace std;

int main() {

	Rectangle r1(2, 2, 5.5, 4.9);
	Rectangle r2(4, 5, 10.5, 3.2);
	Rectangle r3(3, 5, 2.3, 5.4);

	cout << boolalpha;
	cout << "The area for Rectangle 1 is: " << r1.getArea() << " and the perimeter is "
		<< r1.getPerimiter() << endl;
	cout << "Does Rectangle 1 contain (3,3)? " << r1.contains(3, 3) << endl;
	cout << "Does Rectangle 1 contain Rectangle 2? " << r1.contains(r2) << endl;
	cout << "Does Rectangle 1 overlap Rectangle 3? " << r1.overlaps(r3) << endl;

	return 0;
}
