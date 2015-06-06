#include <iostream>
#include <string>
#include "EX04.h"

using namespace std;

int * alloc_array(int size) {
	int* array1 = new int[size];

	for (int i = 0; i < size; i++)
		array1[i] = 42;

	return array1;
}

void prompt_count(int* size) {
	cout << "How many numbers will you need? ";
	cin >> *size;
}

void populate_numbers(int* numbers, int size) {
	for (int* curr = numbers; curr < numbers + size; curr++) {
		cout << "Enter number: ";
		cin >> *curr;
	}
}

double avg(int* numbers, int size) {
	int total = 0;
	for (int*curr = numbers; curr < numbers + size; curr++) {
		total += *curr;
	}
	double avg = (total / size);

	return avg;
}

int aboveAvg(int *numbers, int size) {

	int aboveAvg = 0;
	
	cout << "The average of the numbers is " << avg(numbers, size) << endl;
	for (int *curr = numbers; curr < numbers + size; curr++) {
		if (*curr > avg(numbers, size))
			aboveAvg++;
	}

	return aboveAvg;
}