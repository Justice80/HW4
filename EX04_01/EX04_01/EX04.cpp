#include <iostream>
#include "EX04.h"

using namespace std;

int main() {

	int x;
	prompt_count(&x);
	int * numbers = alloc_array(x);
	populate_numbers(numbers, x);
	cout << "There are " << aboveAvg(numbers, x) << " numbers above average\n";

	delete[] numbers;

	return 0;
}
