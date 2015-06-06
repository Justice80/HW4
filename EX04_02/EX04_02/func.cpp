#include <iostream>
#include "Header.h"

using namespace std;

int *arrayFunct(int size) {
	int* array1 = new int[size];

	for (int i = 0; i < size; i++)
		array1[i] = 42;

	return array1;
}

void populate_numbers(int* numbers, int size) {
	for (int* curr = numbers; curr < numbers + size; curr++) {
		cout << "Enter number: ";
		cin >> *curr;
	}
}

int *doubleCapacity(const int* list, int size){

	int size2 = (2 * size);

	return arrayFunct(size2);
}