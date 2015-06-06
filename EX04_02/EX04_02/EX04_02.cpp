#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	int size;
	cout << "How many numbers do you need? ";
	cin >> size;
	int *list = arrayFunct(size);
	populate_numbers(list, size);
	for (int j = 0; j < size; j++) {
		cout << list[j] << " \n";
	}
	cout << "You need more space!\n";
	int *list2 = doubleCapacity(list, size);
	int *temp = new int[2*size];
	for (int i = 0; i < 2 * size; i++) {
			while (i < size){
			temp[i] = list[i];
			i++;
		}
		while (i >= size && i < 2 * size){
			temp[i] = 0;
			i++;
		}
	}

	for (int k = 0; k < 2 * size; k++) {
		cout << temp[k] << endl;
	}

	delete[] list;
	delete[] temp;

	return 0;
}