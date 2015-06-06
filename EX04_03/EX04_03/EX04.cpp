#include <iostream>
int smallest(int* list, int size);
using namespace std;

int main() {

	const int x = 8;
	int testArray[x] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	int *list = testArray;

	cout << "The smallest number in the list is " << smallest(list, x) << endl;

	delete[] list;

	return 0;
}

int smallest(int* list, int size) {

	int smallest = list[0];
	for (int i = 0; i < size; i++){
		if (list[i] < smallest)
			smallest = list[i];
	}

	return smallest;
}